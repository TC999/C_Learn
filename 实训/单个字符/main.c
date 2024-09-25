#include<stdio.h>

int main()
{
    char a;
    printf("请输入一个字符：\n");
    scanf_s("%c", &a);
    getchar(); // 读取并丢弃换行符

    printf("这个字符是%c\n", a);
    return 0;
}