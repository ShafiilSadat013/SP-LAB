
// 1 to n using function
#include<stdio.h>

int x(int n)
{
    for(int i=1;i<=n;++i)
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
