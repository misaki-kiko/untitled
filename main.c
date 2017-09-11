/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int num,i;

    printf("n的值：");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
       printf("%d的二次方是%d",i,i*i);
        putchar('\n');
    }
    return 0;
}