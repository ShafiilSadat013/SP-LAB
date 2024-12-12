#include<stdio.h>

    int luc(int n)
    {
        if(n==0) return 2;
        if(n==1) return 1;
        return luc(n-1)+luc(n-2);
    }
    int main()
    {
        int x;
        scanf("%d",&x);
        int nluc= luc(x);
        printf("%d",nluc);

    return 0;
    }
