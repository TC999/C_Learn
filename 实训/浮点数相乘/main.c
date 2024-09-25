#include<stdio.h>

int main()
{
    float a, b, c;
    printf("请输入两个浮点数，中间用空格隔开：\n");
    if (scanf_s("%f %f", &a, &b) == 2) { // 确保成功读取了两个整数
        c = a * b;
        printf("%f*%f = %f\n", a, b, c);
    }
    else {
        printf("输入错误，请确保输入了两个浮点数。\n");
    }
    getchar(); // 等待用户输入，防止程序立即退出
    return 0;
}