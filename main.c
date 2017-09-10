/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int a,b;

    printf("输入一个整数：");
    scanf("%d",&a);

    b=0;
    while (b<a)
    {putchar('*');
    putchar('\n');
        b+=1;
    }
    return 0;
}