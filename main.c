/*
	êÆêîÇ∆ïÇìÆè¨êîì_êîÇèëéÆâªÇµÇƒï\é¶
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int a,b,c;
    int sum;
    int retry;

    do {
        printf("please enter two number:");
        scanf("%d%d",&a,&b);
        c= abs(a - b);/*abs是绝对值*/
        sum=(a+b)*(c+1)/2;
        printf("the sum is:%d",sum);
        printf("retry?Yes...0,No...9");
        scanf("%d",&retry);
    }while(retry==0);
        return 0;
}