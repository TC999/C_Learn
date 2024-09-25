#include<stdio.h>

int main()
{
    float a, b , c;
    printf("请输入两个数字，中间用空格隔开：\n");
    scanf("%f %f", &a, &b);

    c = a / b;
    printf("%f%/%f=%f", a, b, c);

    getchar(); // 等待用户输入，防止程序立即退出
    return 0;
}