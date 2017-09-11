/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int num;
    int i;

    printf("显示多少个*？：");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        putchar('*');
        if (i%5==0)
            putchar('\n');
    }
    return 0;
}