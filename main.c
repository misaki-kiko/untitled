/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int i,j;
    int n;

    printf("正方形有几层？：");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        putchar('*');
        for (j=2;j<=n;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}

