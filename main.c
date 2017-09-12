/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int i,j;
    int m=0,n=0;
    int c,d;

    printf("一边：");
    scanf("%d",&i);
    printf("另一边：");
    scanf("%d",&j);

    if (i>j)
    {
        m=i;
        n=j;
        i=j;
        j=m;
    }

    for (c=1;c<=i;c++)
    {
        for (d=1;d<=j;d++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}

