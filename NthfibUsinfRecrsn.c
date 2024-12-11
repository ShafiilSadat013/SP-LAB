#include <stdio.h>

int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int x;
    scanf("%d",&x);
    int nfib= fibo(x);
    printf("%d",nfib);
    return 0;
}

   
    //4
    // 0 1 1 2 3 (3 is the 4th)
 
