/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int i,j;
    int n;
    printf(" |");
    for (n=1;n<=9;n++)
    {
        printf("%3d",n);
    }
    printf("\n------------------------------");
    printf("\n");
    for (i=1;i<=9;i++)
    {
        printf("%d",i);
        printf("|");
        for (j=1;j<=9;j++){
            printf("%3d",i*j);}
        putchar('\n');

    }
    return 0;
}

//我感觉这一段肯定有什么迷一样的错误。。。。。