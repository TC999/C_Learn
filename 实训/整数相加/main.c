#include<stdio.h>

int main()
{
    int a, b, c;
    printf("请输入两个数字，中间用空格隔开：\n");
    if (scanf("%d %d", &a, &b) == 2) { // 确保成功读取了两个整数
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
    } else {
        printf("输入错误，请确保输入了两个整数。\n");
    }
    getchar(); // 等待用户输入，防止程序立即退出
    return 0;
}