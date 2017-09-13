/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int count;
    scanf("%d",&count);
    for (int i=0;i<count; ++i)
    {
        int num_of_space= count - i;
        int num_of_star=i*2+1;
        for (int j=0;j< num_of_space;++j)
        {
            putchar(' ');
        }

        for (int j=0; j<num_of_star;++j)
        {
            putchar('*');
        }

        putchar('\n');
    }
}
