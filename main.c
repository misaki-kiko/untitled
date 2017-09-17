/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#define N 7

int main(void) {
    int i;
    int x[N];

    for (i=0;i<N;i++)
    {
        printf("x[%d]",i);
        scanf("%d",&x[i]);
    }

    for(i=0;i<N/2;i++)
    {
        int temp=x[i];
        x[i] = x[N-i-1];
        x[N-i-1]=temp;
    }

    puts("倒序排列了。");
    for (i = 0; i < N; ++i) {
        printf("x[%d]=%d\n",i,x[i]);
    }
    return 0;
}