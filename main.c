/*
    练习用／2017 misaki_kiko
    练习4-23第二部分 显示出直角在右上方的等腰三角形。
*/

#include <stdio.h>

int main() {
    int width = 0;

    printf("输入一个正整数：");
    scanf("%d",&width);

    for (int i = 0; i < width; ++i) {
        int num_of_space = i;
        int num_of_star  = width - i;

        for (int j = 0; j < num_of_space; ++j) {
            putchar(' ');
        }

        for (int j = 0; j < num_of_star; ++j) {
            putchar('*');
        }

        putchar('\n');
    }
    return 0;
}
