//
// Created by ZHUWX on 2018/3/8.
//
#include "Hand.h"

int Smnoodles(char postrstr[])
{
    double sum = 1.0;
    char noodles[500]={0};
    char roujm[500]={0};
    char name[500]={0};
    char name2[500]={0};
    char louhao[50]={0};
    char sushehao[50]={0};
    char dianhua[120]={0};
    char yaoqiu[1000]={0};
    char QR[]="<img src=\"http://www.xiaoyuan666.com/images/1511877467620.jpg\" width=\"567px\" height=\"992px\">";

    sscanf(postrstr,"zhi=%[^&]&noodles=%[^&]&number=%[^&]&name=%[^&]&louhao=%[^&]&sushehao=%[^&]&dianhua=%[^&]&name2=%[^&]&yaoqiu=%[^&]",&zhi,&noodles,&roujm,&name,&louhao,&sushehao,&dianhua,&name2,&yaoqiu);

    if (noodles[0]=='1') sum+=5.0;
    if (noodles[0]=='2' || noodles[0]=='6') sum+=6.0;
    if (noodles[0]=='3' || noodles[0]=='4') sum+=7.0;
    if (noodles[0]=='5' || noodles[0]=='7') sum+=8.0;
    if (noodles[0]=='8') sum+=9.0;
    if (noodles[0]=='9' || noodles[0]=='a' || noodles[0]=='b') sum+=10;
    sum+=((roujm[0]-'0')*3.5);

    noodles[0]=' ';
    urldecode(name);
    urldecode(name2);
    urldecode(noodles);
    urldecode(yaoqiu);



    printf("Content-Type:text/html;charset=GBK\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >֧������</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    printf("<div>���ţ�3������</div>");
    printf("<div>������֣�%s</div>",name);
    printf("<div>���֧�����˺ţ�%s</div>",name2);
    printf("<div>���Ĳͣ������%c����%s</div>",roujm[0],noodles);
    printf("<div>���¥�ţ�%s</div>",louhao);
    printf("<div>�������ţ�%s</div>",sushehao);
    printf("<div>��ĵ绰��%s</div>",dianhua);
    printf("<h1>����Ҫ֧����%.2fԪ(����1Ԫ�����) �˶��Ϸ�������ȷ�������ɨ��֧����</h1>",sum);

    time_t timep;
    time (&timep);

    FILE *fp;
    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Smallnoodles.txt","aw")) == NULL)	//Write
    {
        printf ("ERROR\n");
        exit (0);
    }


    fputc('\n',fp);
    fprintf(fp,"�͹ݣ�����С�� |");

    if (roujm[0]!=0)
    fprintf(fp,"��ͣ������%s��  |%s  |",roujm,noodles);
    else
        fprintf(fp,"��ͣ�%s  |",noodles);

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
