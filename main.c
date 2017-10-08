/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
int cube (int x)
{
    int a;
    a=x;
    while (x-- >0)
           a+=x;

    return a;
}

int main(void) {
    int a;
     scanf("%d",&a);
    printf("%d",cube(a));
    return 0;
}