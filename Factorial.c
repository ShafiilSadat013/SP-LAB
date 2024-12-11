#include <stdio.h>
long long f(int n)
{
    long long r=1;
    for (int i=1;i<=n;++i)
    {
        r=r*i;
    }
    printf("%lld",r);
}

int main()
{
    int x;
    scanf("%d",&x);
    f(x);
    return 0;
}
