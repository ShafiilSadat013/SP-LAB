#include <stdio.h>

long long f(int n)
{
    if(n<=1) //base case
        return 1;
    return n*f(n-1);// recursive case
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%lld",f(x));
    return 0;
}
