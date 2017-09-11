/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int i,n;
    int h=0;

    printf("整数值：");
    scanf("%d",&n);

    for (i=1;i<=n; i++)
    {
        if (n%i == 0)
        {
            printf("%d ", i);
            h++;
        }
    }
    putchar('\n');
    printf("约数有%d个。",h);
    return 0;
}