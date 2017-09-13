/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>

int main() {
    int count;

    printf("请输入一个整数：");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        int count_num =(count-i)*2+1;
        int count_space = i - 1;

        for (int k = 0; k < count_space; ++k) {
            putchar(' ');
        }

        for (int j = count_num; j > 0; j--) {
            printf("%d", i%10);
        }

        putchar('\n');
    }
    return 0;
}
