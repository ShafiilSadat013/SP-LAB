// n to 1 using function
#include<stdio.h>

int x(int n)
{
    for(int i=n;i>=1;--i)
    {
        printf("%d ",i);
    }
}

int main()
{
    int y;
    scanf("%d",&y);
    x(y);
    return 0;
}
