#include <stdio.h>
int main() //�����в���
{
    printf("Content-Type:text/html;charset=GB2312\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >��ѯ����</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style=\"font-size:12px\">\n");
    int ch;//�����ļ�����ָ��
    FILE *fp;//�ж��������Ƿ���ȷ

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\KAOROU.txt","r"))==NULL)
    {
        printf("<div>����跹û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�


    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\WANZHOU.txt","r"))==NULL)
    {
        printf("<div>��������û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yipin.txt","r"))==NULL)
    {
        printf("<div>һƷû�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yangtang.txt","r"))==NULL)
    {
        printf("<div>������û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Tujia.txt","r"))==NULL)
    {
        printf("<div>���ҵ�����û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Smallnoodles.txt","r"))==NULL)
    {
        printf("<div>����С��û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Hundun.txt","r"))==NULL)
    {
        printf("<div>����û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Egg.txt","r"))==NULL)
    {
        printf("<div>�������û�ж��ͣ�</div>");//�򿪲������ɹ�
    }
    //�ɹ�����argv[1]��ָ�ļ�
    ch=fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
    while(ch!=EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
    {
        putchar(ch); //�����ǽ������������������Ļ����ʾ
        ch=fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
    fclose(fp); //�ر�fp��ָ�ļ�
    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");
}