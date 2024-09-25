#include<stdio.h>

int main()
{
    float a;
    printf("请输入浮点数：\n");
    scanf_s("%f", &a); // 使用标准的scanf函数

    printf("浮点数为%f\n", a); // 直接使用变量a的值
    getchar();
    return 0;
}