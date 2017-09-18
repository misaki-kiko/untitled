/*
    练习用／2017 misaki_kiko
*/

#include <stdio.h>
#define NUMBER 1000
int main(void) {
    int num;
    int m;
    int x[m];

    printf("数据个数：");
    do
    {
        scanf("%d",&num);
        if (num<0||num>NUMBER)
        printf("请输入1～1000的数字：");
    } while(num<0||num>NUMBER);

    for (int i = 0; i <num ; ++i) {
        printf("%2d号：",i+1);
            scanf("%d",&x[i]);
    }
    printf("{");
    for (int j = 0; j <num ; ++j) {
        printf("%d",x[j]);
        if (j != num - 1)
        printf(",");
    }
    printf("}");
    return 0;
}