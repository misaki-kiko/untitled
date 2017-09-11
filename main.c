/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
   int a,b;
    int i;

    printf("请输入一个整数：");
    scanf("%d",&a);

    for (i=0;i<=a;i++)
    {
        if(i%2>0)
            printf("%d ",i);
    }

    return 0;
}