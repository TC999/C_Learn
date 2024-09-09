#include <stdio.h>

int main() {
    float radius;
    double circumference, area;

    // 获取用户输入的半径
    printf("请输入圆的半径: ");
    scanf_s("%f", &radius); // 使用 scanf_s 替代 scanf

    // 计算周长和面积
    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    // 输出结果
    printf("圆的周长: %.2f\n", circumference);
    printf("圆的面积: %.2f\n", area);

    // 等待用户输入，以便可以看到输出结果
    printf("按任意键退出...");
    getchar(); // 等待用户输入一个字符
    getchar(); // 再次等待，因为第一个 getchar() 可能会读取之前 scanf 留下的换行符

    return 0;
}