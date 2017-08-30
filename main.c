/*
	êÆêîÇ∆ïÇìÆè¨êîì_êîÇèëéÆâªÇµÇƒï\é¶
*/

#include <stdio.h>

int main(void)
{
    int retry;

    do
    {
        int a;
        printf("please enter a number:\n");
        scanf("%d",&a);
        if (a ==0)
            puts("the number is 0");
        else if (a<0)
            puts("the number is xiaoyu 0");
        else
            puts("the number is dayu 0");
        printf("retry it? yes...1,no...0");
        scanf("%d",&retry);
    }while(retry==1);
        return 0;
}