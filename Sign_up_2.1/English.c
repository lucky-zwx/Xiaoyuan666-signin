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
    printf("<HEAD>\n<TITLE >��ʾ����</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    sscanf(poststr, "zhi=%[^&]&xibie=%[^&]&name=%[^&]&class=%[^&]&dianhua=%[^&]&book=%[^&]&returnday=%[^&]",&zhi,&xibie,&eng_name,&eng_class,&dianhua,&book,&returnday);

    urldecode(eng_class); //�����
    urldecode(eng_name);
    urldecode(dianhua);
    urldecode(xibie);
    urldecode(book);
    urldecode(returnday);

    FILE *fp;//�ж��������Ƿ���ȷ

    /*
     * ��ϸ��Ϣ��ѯ��
     */


    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\eng.txt", "aw")) == NULL)	//Write
    {
        printf("<div>���ݴ洢ʧ�ܣ� (�� �㧥 ��;)��</div>");
        fclose(fp);
        exit(0);
    }
    else {
        fputc('\n', fp);
        fprintf(fp, "ϵ��%s", xibie);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�༶��%s", eng_class);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "������%s", eng_name);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�绰��%s", dianhua);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "ͼ�飺%s", book);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�黹���ڣ�%s", returnday);
        fprintf(fp, "%s", "   ");
        time_t timep;
        time(&timep);
        fprintf(fp, "�ύʱ�䣺%s", ctime(&timep));
        fprintf(fp, "%s", "   ");
        fputs("<div></div>", fp);
    }
    /*
     * ����Ϣ��ѯ��
     */

    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\engx.txt", "aw")) == NULL)	//Write
    {
        printf("<div>���ݴ洢ʧ�ܣ� (�� �㧥 ��;)��</div>");
        fclose(fp);
        exit(0);
    }
else {
        fputc('\n', fp);
        fprintf(fp, "ϵ��%s", xibie);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�༶��%s", eng_class);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "������%s", eng_name);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�绰��%s", dianhua);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "ͼ�飺%s", book);
        fprintf(fp, "%s", "   ");
        fprintf(fp, "�黹���ڣ�%s", returnday);
        fprintf(fp, "%s", "   ");
        fclose(fp);
    }

    printf("<div>�༶��%s</div>", eng_class);
    printf("<div>������%s</div>", eng_name);
    printf("<div>ϵ��%s</div>", xibie);
    printf("<div>����ͼ�飺%s</div>", book);
    printf("<div>�绰��%s</div>", dianhua);
    printf("<div>�黹���ڣ�%s</div>", returnday);
    printf("<h1>�����������Ϣ�������ɹ���</h1>");

    printf("</div>\n");
    printf("</BODY>\n");
    fflush(stdout);
    return 0;
}