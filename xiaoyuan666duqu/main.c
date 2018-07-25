#include <stdio.h>
int main() //命令行参数
{
    printf("Content-Type:text/html;charset=GB2312\n\n");
    printf("<HTML>\n");
    printf("<HEAD>\n<TITLE >查询界面</TITLE>\n</HEAD>\n");
    printf("<BODY>\n");
    printf("<div style=\"font-size:12px\">\n");
    int ch;//定义文件类型指针
    FILE *fp;//判断命令行是否正确

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\KAOROU.txt","r"))==NULL)
    {
        printf("<div>烤肉拌饭没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件


    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\WANZHOU.txt","r"))==NULL)
    {
        printf("<div>万州拉面没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yipin.txt","r"))==NULL)
    {
        printf("<div>一品没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Yangtang.txt","r"))==NULL)
    {
        printf("<div>羊肉汤没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Tujia.txt","r"))==NULL)
    {
        printf("<div>土家掉渣饼没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Smallnoodles.txt","r"))==NULL)
    {
        printf("<div>重庆小面没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Hundun.txt","r"))==NULL)
    {
        printf("<div>混沌没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件

    if((fp=fopen("C:\\Program Files\\Apache Software Foundation\\Apache2.2\\htdocs\\Egg.txt","r"))==NULL)
    {
        printf("<div>鸡蛋灌饼没有订餐！</div>");//打开操作不成功
    }
    //成功打开了argv[1]所指文件
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示
    fclose(fp); //关闭fp所指文件
    printf("</div>\n");
    printf("</BODY>\n");
    printf("</HTML>\n");
}