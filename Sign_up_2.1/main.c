#include "Head.h"

int main() {
    char zhi[3] = { 0 };         //报名选择
    char *lenstr, poststr[500];  //数据长度，post储存
    long len = 0;
    char *ptr;

    lenstr = getenv("CONTENT_LENGTH"); //长度获取
    len=strtol(lenstr,&ptr,10)+1; //长度获取

    if (lenstr == NULL && len<0 && len>9999) {
        printf("<h1 style = \"color:blue;text-align:center\">您的输入为空，请检查无误后重新输入！< / h1>");
        return 0;
    }

    fgets(poststr, len + 1, stdin);

    if (strlen(poststr) > 1000) {
        printf("Content-Type:text/html;charset=GB2312\n\n");
        printf("<HTML>\n");
        printf("<HEAD>\n<TITLE >提示界面</TITLE>\n</HEAD>\n");
        printf("<BODY>\n");
        printf("<div style = \"color:blue;text-align:center\">\n");
        printf("<h1 style = \"color:blue;text-align:center\">您的输入超过正常长度！！！</h1>");
        printf("</div>\n");
        printf("</BODY>\n");
        printf("</HTML>\n");
        return 0;
    }
    sscanf(poststr, "zhi=%[^&]", zhi);
    if (zhi[0] == '1')  //电竞社
        DIANJ(poststr);
    if (zhi[0] == '2')  //sos社
        SOS(poststr);
    if (zhi[0] == '3')  //汉服社
        China(poststr);
    if (zhi[0] == '4')  //乒乓球社
        Pingpong(poststr);
    if (zhi[0] == '5')  //英语社
        English(poststr);
    return 0;
}