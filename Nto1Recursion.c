// n to 1 recursion
#include<stdio.h>
void x(int n)
{
    if(n==0) return ;
    printf("%d ",n);
    x(n-1);
}

int main()
{
    int l;
    scanf("%d",&l);
    x(l);
    return 0;

}
