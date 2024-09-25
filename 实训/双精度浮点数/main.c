#include<stdio.h>

int main()
{
    double b;
    printf("请输入一个双精度浮点数：");
    scanf_s("%lf", &b); // 使用标准的scanf函数

    printf("双精度浮点数为%lf\n", b); // 添加换行符
    getchar(); // 等待用户输入，防止控制台窗口直接关闭
    return 0;
}