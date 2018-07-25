//
// Created by ZHUWX on 2018/1/29.
//

#include "Head.h"

int China(char poststr[])
{
    char zhi[3] = { 0 };
    char china_class[500] = { 0 };
    char china_name[500] = { 0 };
    char dianhua[22] = { 0 };
    printf("Content-Type:text/html;charset=GB2312\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >提示界面</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    sscanf(poststr, "zhi=%[^&]&china1=%[^&]&china2=%[^&]&dianhua=%[^&]", &zhi,&china_class,&china_name,&dianhua);

    urldecode(china_class); //解码后
    urldecode(china_name);
    urldecode(dianhua);

    char s[1024];
    FILE *fp;//判断命令行是否正确

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\china.txt", "r")) == NULL)
    {
        printf("<div>/-(●'_^_'●)-/ 您是第一个报名的人！</div>");
    }

    while ((fgets(s, 1024, fp)) != NULL)
    {
        char *str1 = strstr(s, china_name);
        if (str1 != NULL) {
            printf("<div>请不要重复输入姓名！</div>"
                           "<div>ㄟ( 0 , 0 )ㄏ</div>"
                           "<div>(o……o)☆[BINGO!]</div>");
            exit(0);
        }
        char *str2 = strstr(s, dianhua);
        if (str2 != NULL) {
            printf("<div>请不要重复输入电话！</div>"
                           "<div>ㄟ( 0 , 0 )ㄏ</div>"
                           "<div>(o……o)☆[BINGO!]</div>");
            exit(0);
        }
    }

    fclose(fp); //关闭fp所指文件


    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\china.txt", "aw")) == NULL)	//Write
    {
        printf("<div>数据存储失败！ 〒▽〒</div>");
        fclose(fp);
        exit(0);
    }

    fputc('\n', fp);
    fprintf(fp, "%s", china_class);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", china_name);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", dianhua);
    fprintf(fp, "%s", "   ");
    time_t timep;
    time(&timep);
    fprintf(fp, "%s", ctime(&timep));
    fprintf(fp, "%s", "   ");
    fputs("<div></div>", fp);

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\chinax.txt", "aw")) == NULL)	//Write
    {
        printf("<div>数据存储失败 〒▽〒</div>");
        fclose(fp);
        exit(0);
    }

    fputc('\n', fp);
    fprintf(fp, "%s", china_class);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", china_name);
    fprintf(fp, "%s", "   ");

    fclose(fp);

    printf("<div>%s</div>", china_class);
    printf("<div>%s</div>", china_name);
    printf("<div>%s</div>", dianhua);
    printf("<h1>以上是你的信息，报名成功！</h1>");

    printf("</div>\n");
    printf("</BODY>\n");
    fflush(stdout);
    return 0;
}