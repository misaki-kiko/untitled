/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int a,b;
    int i=1;

    printf("请输入一个整数：");
    scanf("%d",&a);

    while(i<a)
    {
        b=a%10;
        a/=10;
        i+=1;
    }
    printf("%d",i);
    return 0;
}