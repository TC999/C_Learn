#define _CRT_SECURE_NO_WARNINGS // 定义这个宏来禁用不安全函数的警告

#include <stdio.h>

int main()
{
    int a;
    printf("请输入一个整数：");
    scanf_s("%d", &a, sizeof(a)); // 使用 scanf_s 并提供变量的地址和大小

    printf("整数为：%d\n", a);

    int c = getchar(); // 读取一个字符并存储在变量 c 中
    // 如果你不需要 c，可以简单地调用 getchar() 而不存储返回值

    return 0;
}