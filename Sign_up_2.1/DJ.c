//
// Created by ZHUWX on 2018/1/29.
//

#include "Head.h"

int DIANJ(char poststr[])
{
    char zhi[3] = { 0 };
    char dian1_class[100] = { 0 };
    char dian2_name[100] = { 0 };
    char dianhua[22] = { 0 };
    printf("Content-Type:text/html;charset=GB2312\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >��ʾ����</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    sscanf(poststr, "zhi=%[^&]&dian1=%[^&]&dian2=%[^&]&dianhua=%[^&]", &zhi, &dian1_class, &dian2_name, &dianhua);
    urldecode(dian1_class);		//����
    urldecode(dian2_name);		//����
    urldecode(dianhua);

    char s[1024];			//����ظ�
    FILE *fp;   //�ж��������Ƿ���ȷ

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\dj.txt", "r")) == NULL)
    {
        printf("<div>/-(��'_^_'��)-/ ���ǵ�һ���������ˣ�</div>");
    }

    while ((fgets(s, 1024, fp)) != NULL)
    {
        char *str1 = strstr(s, dian2_name);
        if (str1 != NULL) {
            printf("<div>�벻Ҫ�ظ�����������</div>"
                           "<div>��( 0 , 0 )��</div>"
                           "<div>(o����o)��[BINGO!]</div>");
            exit(0);
        }
        char *str2 = strstr(s, dianhua);
        if (str2 != NULL) {
            printf("<div>�벻Ҫ�ظ�����绰��</div>"
                           "<div>��( 0 , 0 )��</div>"
                           "<div>(o����o)��[BINGO!]</div>");
            exit(0);
        }
    }

    fclose(fp); //�ر�fp��ָ�ļ�

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\dj.txt", "aw")) == NULL)	//Write
    {
        printf("<div>���ݴ洢ʧ�ܣ� ������</div>");
        fclose(fp);
        exit(0);
    }

    fputc('\n', fp);
    fprintf(fp, "%s", dian1_class);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", dian2_name);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", dianhua);
    fprintf(fp, "%s", "   ");
    time_t timep;
    time(&timep);
    fprintf(fp, "%s", ctime(&timep));
    fprintf(fp, "%s", "   ");
    fputs("<div></div>", fp);
    fclose(fp);

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\djx.txt", "aw")) == NULL)	//Write
    {
        printf("<div>���ݴ洢ʧ�ܣ� ������</div>");
        fclose(fp);
        exit(0);
    }

    fputc('\n', fp);
    fprintf(fp, "%s", dian1_class);
    fprintf(fp, "%s", "   ");
    fprintf(fp, "%s", dian2_name);
    fputs("<div></div>", fp);
    fclose(fp);


    printf("<div>%s</div>", dian1_class);
    printf("<div>%s</div>", dian2_name);
    printf("<div>%s</div>", dianhua);
    printf("<h1>�����������Ϣ�������ɹ���</h1>");
/*
 *  ������ѯ
 */
    printf("<html>\n"
                   "<body>\n"
                   "<div align=\"center\"><a href=\"http://www.xiaoyuan666.com/cgi-bin/djduqu.cgi\n"
                   "\"><strong><font size=\"7\">��ѯ</font></strong></a></div>\n"
                   "</body>\n"
                   "</html>");

    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");
    fflush(stdout);
    return 0;
}