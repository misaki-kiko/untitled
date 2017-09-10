/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int num,sum;
    int i;

    printf("请输入一个正整数：");
    scanf("%d",&num);

    sum=0;

    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("和为%d",sum);
    return 0;
}