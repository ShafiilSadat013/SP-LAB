#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y ;
    *y =  temp;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before swap a=%d  , b =%d\n", a ,b);
    swap(&a,&b);
    printf("after swap a =%d , b=%d ",a,b);
    return 0;
}
