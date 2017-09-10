/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
   int a,b;

    printf("请输入一个整数:");
    scanf("%d",&a);

    b=0;
    while (a>b)
    {
        putchar('+');
        b+=1;
        if (b<a){
        putchar('-');}
        b+=1;
    }

    return 0;
}