#include<stdio.h>

int main()
{
    int a, b , c;
    printf("请输入两个数字，中间用空格隔开：\n");
    scanf("%d %d", &a, &b);

    c = a % b;
    printf("%d%%%d=%d", a, b, c);

    getchar(); // 等待用户输入，防止程序立即退出
    return 0;
}