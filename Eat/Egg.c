//
// Created by ZHUWX on 2018/3/17.
//
#include "Hand.h"

int Egg(char poststr[])
{
    char noodles[200]={0};
    char ch1[200]={0};
    char name[200]={0};
    char name2[200]={0};
    char louhao[100]={0};
    char sushehao[100]={0};
    char dianhua[100]={0};
    char yaoqiu[999]={0};
    double sum=1.0;
    time_t timep;
    time (&timep);
    char QR[]="<img src=\"http://www.xiaoyuan666.com/images/1511877467620.jpg\" width=\"567px\" height=\"992px\">";

    sscanf(poststr,
               "zhi=%[^&]&noodles=%[^&]&ch1=%[^&]&name=%[^&]&louhao=%[^&]&sushehao=%[^&]&dianhua=%[^&]&name2=%[^&]&yaoqiu=%[^&]",
               &zhi, &noodles, &ch1, &name, &louhao, &sushehao, &dianhua, &name2, &yaoqiu);

    if (noodles[0]=='1' || noodles[0]=='2' || noodles[0]=='3')
    {
        sum+=6.0;
    }

    if (ch1[0]=='1') sum+=3.5;
    if (ch1[0]=='2') sum+=4.0;
    if (ch1[0]=='3') sum+=5.0;
    if (ch1[0]=='4') sum+=6.0;
    if (ch1[0]=='5') sum+=7.0;
    if (ch1[0]=='6') sum+=8.0;
    if (ch1[0]=='7') sum+=9.0;
    if (ch1[0]=='8') sum+=10.0;

    urldecode(name);
    urldecode(name2);
    urldecode(noodles);
    urldecode(ch1);
    urldecode(yaoqiu);

    ch1[0]=' ';
    noodles[0]=' ';

    printf("Content-Type:text/html;charset=GBK\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >֧������</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");

    printf("<div>���ţ�3������</div>");
    printf("<div>������֣�%s</div>",name);
    printf("<div>���֧�����˺ţ�%s</div>",name2);
    if (ch1[0]!=0)
        printf("<div>��ѡ����</div>");
    ch1[0]=' ';
    printf("<div>���Ĳͣ�%s</div>",noodles);
    printf("<div>���¥�ţ�%s</div>",louhao);
    printf("<div>�������ţ�%s</div>",sushehao);
    printf("<div>��ĵ绰��%s</div>",dianhua);
    printf("<h1>����Ҫ֧����%.2fԪ(����1Ԫ�����) �˶��Ϸ�������ȷ�������ɨ��֧����</h1>",sum);
    printf ("%s",QR);                   //�����ά��
    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");


    FILE *fp;
    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Egg.txt","aw")) == NULL)	//Write
    {
        printf ("ERROR\n");
        exit (0);
    }


    fputc('\n',fp);
    fprintf(fp,"�͹ݣ�������� |");
    fprintf(fp,"��ͣ�%s  |%s  |",ch1,noodles);
    fprintf(fp,"������%s  |",name);
    fprintf(fp,"¥�ţ�%s  |",louhao);
    fprintf(fp,"����ţ�%s  |",sushehao);
    fprintf(fp,"�绰��%s  |",dianhua);
    fprintf(fp,"֧�����˺ţ�%s  |",name2);
    fprintf(fp,"Ҫ��%s  |",yaoqiu);
    fprintf(fp,"��Ҫ֧����%.2fԪ  |",sum);
    fprintf(fp,"����ʱ�䣺%s   <div></div>",ctime(&timep));
    fclose(fp);

    fflush(stdout);
    return 0;
}
