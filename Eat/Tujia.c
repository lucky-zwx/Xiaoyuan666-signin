//
// Created by ZHUWX on 2018/3/7.
//
#include "Hand.h"

int Tujia (char poststr[])
{

    char checkbox1[500]={0};
    char huoshao[500]={0};
    char numberofhs[500]={0};
    char name[500]={0};
    char name2[500]={0};
    char louhao[50]={0};
    char sushehao[50]={0};
    char dianhua[120]={0};
    char yaoqiu[1000]={0};
    double sum=1.0;
    char QR[]="<img src=\"http://www.xiaoyuan666.com/images/1511877467620.jpg\" width=\"567px\" height=\"992px\">";

    sscanf(poststr,"zhi=%[^&]&ch1=%[^&]&huoshao=%[^&]&numbers=%[^&]&name=%[^&]&louhao=%[^&]&sushehao=%[^&]&dianhua=%[^&]&name2=%[^&]&yaoqiu=%[^&]",&zhi,&checkbox1,&huoshao,&numberofhs,&name,&louhao,&sushehao,&dianhua,&name2,&yaoqiu);

    printf("Content-Type:text/html;charset=GBK\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >֧������</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style = \"color:blue;text-align:center\">\n");
    if (checkbox1[0]=='1') sum+=4.5;

    if (checkbox1[0]=='2') sum+=4.0;

    if (checkbox1[0]=='3') sum+=4.5;

    if (checkbox1[0]=='4') sum+=4.5;

    if (checkbox1[0]=='5') sum+=4.0;

    if (checkbox1[0]=='6') sum+=3.5;

    if (checkbox1[0]=='7') sum+=5.5;

    if (checkbox1[0]=='8') sum+=6.0;

    if (checkbox1[0]=='9') sum+=5.5;

    if (huoshao[0]=='1'
        ||huoshao[0]=='2'
          ||huoshao[0]=='3'
            ||huoshao[0]=='4'
              ||huoshao[0]=='5'
                ||huoshao[0]=='6'
                  ||huoshao[0]=='7'
                    ||huoshao[0]=='8'
                      ||huoshao[0]=='9')
        sum += 1.5*((numberofhs[0]-'0')*1.0);
    if (huoshao[0]=='b'|| huoshao[0]=='a')
        sum += 2.0*((numberofhs[0]-'0')*1.0);

    urldecode(checkbox1); //�����
    urldecode(name);
    urldecode(name2);
    urldecode(huoshao);
    urldecode(yaoqiu);


    huoshao[0]=' ';


    printf("<div>���ţ�3������</div>");
    printf("<div>������֣�%s</div>",name);
    printf("<div>���֧�����˺ţ�%s</div>",name2);
    if (checkbox1[0]!=0)
        printf("<div>��ѡ�����ҵ�����</div>");
    printf("<div>���Ĳͣ�%s   ������%s</div>",huoshao,numberofhs);
    printf("<div>���¥�ţ�%s</div>",louhao);
    printf("<div>�������ţ�%s</div>",sushehao);
    printf("<div>��ĵ绰��%s</div>",dianhua);
    printf("<h1>����Ҫ֧����%.2fԪ(����1Ԫ�����) �˶��Ϸ�������ȷ�������ɨ��֧����</h1>",sum);

    checkbox1[0]=' ';

    time_t timep;
    time (&timep);

    FILE *fp;
    if ((fp = fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Tujia.txt","aw")) == NULL)	//Write
    {
        printf ("ERROR\n");
        exit (0);
    }


    fputc('\n',fp);
    fprintf(fp,"�͹ݣ����ҵ����� |");
    fprintf(fp,"��ͣ�%s  |%s  |������%s  |",checkbox1,huoshao,numberofhs);
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
