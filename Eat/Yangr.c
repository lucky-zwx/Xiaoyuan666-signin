//
// Created by ZHUWX on 2018/3/8.
//

#include "Hand.h"

int Yangrou(char poststr[])
{
    char soup[500]={0};
    char noodles[500]={0};
    char ch1[500]={0};
    char ch2[500]={0};
    char bin[500]={0};
    char numbers[500]={0};
    char name[500]={0};
    char name2[500]={0};
    char louhao[50]={0};
    char sushehao[50]={0};
    char dianhua[120]={0};
    char yaoqiu[1000]={0};
    double sum=1.0;
    char QR[]="<img src=\"http://www.xiaoyuan666.com/images/1511877467620.jpg\" width=\"567px\" height=\"992px\">";

    sscanf(poststr,"zhi=%[^&]&soup=%[^&]&ch1=%[^&]&noodles=%[^&]&ch2=%[^&]&bin=%[^&]&numbers=%[^&]&name=%[^&]&louhao=%[^&]&sushehao=%[^&]&dianhua=%[^&]&name2=%[^&]&yaoqiu=%[^&]",&zhi,&soup,&ch1,&noodles,&ch2,&bin,&numbers,&name,&louhao,&sushehao,&dianhua,&name2,&yaoqiu);

    printf("Content-Type:text/html;charset=GBK\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >֧������</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");

    if (soup[0]=='1')
    {
        if (ch1[0]=='1')
            sum+=10.0;
        else
            sum+=12.0;
    }

    if (soup[0]=='2')
    {
        if (ch1[0]=='1')
            sum+=9.0;
        else
            sum+=11.0;
    }

    if (soup[0]=='3')
    {
        if (ch1[0]=='1')
            sum+=8.0;
        else
            sum+=10.0;
    }

    if (soup[0]=='4')
    {
        if (ch1[0]=='1')
            sum+=8.0;
        else
            sum+=10.0;
    }

    if (noodles[0]=='1')
    {
        if (ch2[0]=='1')
            sum+=12.0;
        else
            sum+=14.0;
    }

    if (noodles[0]=='2')
    {
        if (ch2[0]=='1')
            sum+=7.0;
        else
            sum+=9.0;
    }

    if (bin[0]=='1')
    {
        sum+=(numbers[0]-'0')*1.0;
    }

    if (bin[0]=='2')
    {
        sum+=(numbers[0]-'0')*0.5;
    }

    urldecode(soup);
    urldecode(noodles);
    urldecode(bin);
    urldecode(ch1);
    urldecode(ch2);
    urldecode(name);
    urldecode(name2);
    urldecode(yaoqiu);

    soup[0]=' ';
    noodles[0]=' ';
    bin[0]=' ';

    printf("<div>���ţ�3������</div>");
    printf("<div>������֣�%s</div>",name);
    printf("<div>���֧�����˺ţ�%s</div>",name2);
    printf("<div>���Ĳͣ�  %s   %s   %s    %c��</div>",soup,noodles,bin,numbers[0]);
    printf("<div>���¥�ţ�%s</div>",louhao);
    printf("<div>�������ţ�%s</div>",sushehao);
    printf("<div>��ĵ绰��%s</div>",dianhua);
    printf("<h1>����Ҫ֧����%.2fԪ(����1Ԫ�����) �˶��Ϸ�������ȷ�������ɨ��֧����</h1>",sum);

    time_t timep;
    time (&timep);

    FILE *fp;
    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yangtang.txt","aw")) == NULL)	//Write
    {
        printf ("ERROR\n");
        exit (0);
    }


    fputc('\n',fp);
    fprintf(fp,"�͹ݣ������� |");
    fprintf(fp,"%s   |%s   |%s   |%s   |%s    |%c ��  |",soup,ch1,noodles,ch2,bin,numbers[0]);
    fprintf(fp,"������%s  |",name);
    fprintf(fp,"¥�ţ�%s  |",louhao);
    fprintf(fp,"����ţ�%s  |",sushehao);
    fprintf(fp,"�绰��%s  |",dianhua);
    fprintf(fp,"֧�����˺ţ�%s  |",name2);
    fprintf(fp,"Ҫ��%s  |",yaoqiu);
    fprintf(fp,"��Ҫ֧����%.2fԪ  |",sum);
    fprintf(fp,"����ʱ�䣺%s   <div></div>",ctime(&timep));
    fclose(fp);

    printf ("%s",QR);                   //�����ά��
    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");
    fflush(stdout);
    return 0;
}