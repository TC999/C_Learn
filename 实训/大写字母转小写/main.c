#include<stdio.h>

int main()
{
    char a, b;
    printf("请输入一个大写字母：\n");
    scanf("%c", &a); // 如果你的环境支持scanf_s，请使用scanf_s
    if(a >= 'A' && a <= 'Z') { // 检查是否为大写字母
        b = a + 32; // 转换为小写字母
        printf("转换为小写字母是：%c\n", b);
    } else {
        printf("输入的不是大写字母。\n");
    }
    getchar(); // 等待用户输入，防止程序立即退出
    return 0;
}