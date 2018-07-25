//
// Created by ZHUWX on 2018/3/26.
//


#include "Head.h"

int English(char poststr[])
{
    char zhi[3] = { 0 };
    char xibie[500] = {0};
    char eng_class[500] = { 0 };
    char eng_name[500] = { 0 };
    char dianhua[22] = { 0 };
    char book[500] = {0};
    char returnday[500]={0};
    printf("Content-Type:text/html;charset=GB2312\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >提示界面</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    sscanf(poststr, "zhi=%[^&]&xibie=%[^&]&name=%[^&]&class=%[^&]&dianhua=%[^&]&book=%[^&]&returnday=%[^&]",&zhi,&xibie,&eng_name,&eng_class,&dianhua,&book,&returnday);

    urldecode(eng_class); //解码后
    urldecode(eng_name);
    urldecode(dianhua);
    urldecode(xibie);
    urldecode(book);
    urldecode(returnday);

    FILE *fp;//判断命令行是否正确

    /*
     * 详细信息查询！
     */


    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\eng.txt", "aw")) == NULL)	//Write
    {
        printf("<div>数据存储失败！ (っ °Д °;)っ</div>");
        fclose(fp);
        exit(0);
    }
    else {
        fputc('\n', fp);
        fprintf(fp, "系别：%s", xibie);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "班级：%s", eng_class);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "姓名：%s", eng_name);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "电话：%s", dianhua);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "图书：%s", book);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "归还日期：%s", returnday);
        fprintf(fp, "%s", "   ");
        time_t timep;
        time(&timep);
        fprintf(fp, "提交时间：%s", ctime(&timep));
        fprintf(fp, "%s", "   ");
        fputs("<div></div>", fp);
    }
    /*
     * 简单信息查询！
     */

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\engx.txt", "aw")) == NULL)	//Write
    {
        printf("<div>数据存储失败！ (っ °Д °;)っ</div>");
        fclose(fp);
        exit(0);
    }
else {
        fputc('\n', fp);
        fprintf(fp, "系别：%s", xibie);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "班级：%s", eng_class);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "姓名：%s", eng_name);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "电话：%s", dianhua);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "图书：%s", book);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "归还日期：%s", returnday);
        fprintf(fp, "%s", "   ");
        fclose(fp);
    }

    printf("<div>班级：%s</div>", eng_class);
    printf("<div>姓名：%s</div>", eng_name);
    printf("<div>系别：%s</div>", xibie);
    printf("<div>所借图书：%s</div>", book);
    printf("<div>电话：%s</div>", dianhua);
    printf("<div>归还日期：%s</div>", returnday);
    printf("<h1>以上是你的信息，报名成功！</h1>");

    printf("</div>\n");
    printf("</BODY>\n");
    fflush(stdout);
    return 0;
}