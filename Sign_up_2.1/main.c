#include "Head.h"

int main() {
    char zhi[3] = { 0 };         //����ѡ��
    char *lenstr, poststr[500];  //���ݳ��ȣ�post����
    long len = 0;
    char *ptr;

    lenstr = getenv("CONTENT_LENGTH"); //���Ȼ�ȡ
    len=strtol(lenstr,&ptr,10)+1; //���Ȼ�ȡ

    if (lenstr == NULL && len<0 && len>9999) {
        printf("<h1 style = \"color:blue;text-align:center\">��������Ϊ�գ�����������������룡< / h1>");
        return 0;
    }

    fgets(poststr, len + 1, stdin);

    if (strlen(poststr) > 1000) {
        printf("Content-Type:text/html;charset=GB2312\n\n");
        printf("<HTML>\n");
        printf("<HEAD>\n<TITLE >��ʾ����</TITLE>\n</HEAD>\n");
        printf("<BODY>\n");
        printf("<div style = \"color:blue;text-align:center\">\n");
        printf("<h1 style = \"color:blue;text-align:center\">�������볬���������ȣ�����</h1>");
        printf("</div>\n");
        printf("</BODY>\n");
        printf("</HTML>\n");
        return 0;
    }
    sscanf(poststr, "zhi=%[^&]", zhi);
    if (zhi[0] == '1')  //�羺��
        DIANJ(poststr);
    if (zhi[0] == '2')  //sos��
        SOS(poststr);
    if (zhi[0] == '3')  //������
        China(poststr);
    if (zhi[0] == '4')  //ƹ������
        Pingpong(poststr);
    if (zhi[0] == '5')  //Ӣ����
        English(poststr);
    return 0;
}