//
// Created by ZHUWX on 2018/3/8.
//
#include "Hand.h"

int Yipin (char postrstr[])
{
    int sum = 1;
    char soup[700]={0};
    char noodle[700]={0};
    char name[500]={0};
    char name2[500]={0};
    char louhao[50]={0};
    char sushehao[50]={0};
    char dianhua[120]={0};
    char yaoqiu[1000]={0};
    char QR[]="<img src=\"http://www.xiaoyuan666.com/images/1511877467620.jpg\" width=\"567px\" height=\"992px\">";

    sscanf(postrstr,"zhi=%[^&]&soup=%[^&]&noodle=%[^&]&name=%[^&]&louhao=%[^&]&sushehao=%[^&]&dianhua=%[^&]&name2=%[^&]&yaoqiu=%[^&]",&zhi,&soup,&noodle,&name,&louhao,&sushehao,&dianhua,&name2,&yaoqiu);

    if (soup[0]=='1') sum+=10;

    if ((soup[0]=='2') || (soup[0]=='3')) sum+=8;

    if (noodle[0]== '1' ) sum+=6;

    if ((noodle[0]== '2') || (noodle[0]=='3')) sum+=5;

    if (noodle[0]== '4') sum+=3;

    soup[0]=' ';
    noodle[0]=' ';


    urldecode(soup);
    urldecode(noodle);
    urldecode(name);
    urldecode(name2);
    urldecode(yaoqiu);

    printf("Content-Type:text/html;charset=GBK\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >֧������</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    printf("<div>���ţ�3������</div>");
    printf("<div>������֣�%s</div>",name);
    printf("<div>���֧�����˺ţ�%s</div>",name2);
    printf("<div>���Ĳͣ�%s  ��  %s</div>",soup,noodle);
    printf("<div>���¥�ţ�%s</div>",louhao);
    printf("<div>�������ţ�%s</div>",sushehao);
    printf("<div>��ĵ绰��%s</div>",dianhua);
    printf("<h1>����Ҫ֧����%dԪ(����1Ԫ�����) �˶��Ϸ�������ȷ�������ɨ��֧����</h1>",sum);

    time_t timep;
    time (&timep);

    FILE *fp;
    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yipin.txt","aw")) == NULL)	//Write
    {
        printf ("ERROR\n");
        exit (0);
    }


    fputc('\n',fp);
    fprintf(fp,"�͹ݣ���Ʒţ���� |");
    fprintf(fp,"��ͣ�%s  |%s  |",soup,noodle);
    fprintf(fp,"������%s  |",name);
    fprintf(fp,"¥�ţ�%s  |",louhao);
    fprintf(fp,"����ţ�%s  |",sushehao);
    fprintf(fp,"�绰��%s  |",dianhua);
    fprintf(fp,"֧�����˺ţ�%s  |",name2);
    fprintf(fp,"Ҫ��%s  |",yaoqiu);
    fprintf(fp,"��Ҫ֧����%dԪ  |",sum);
    fprintf(fp,"����ʱ�䣺%s   <div></div>",ctime(&timep));
    fclose(fp);

    printf ("%s",QR);                   //�����ά��
    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");
    fflush(stdout);
    return 0;
}
