/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
  int a,b;

    scanf("%d",&a);

    for (b=0;b<a;b++)
    {
        printf("%d",b%10+1);
    }

    return 0;
}