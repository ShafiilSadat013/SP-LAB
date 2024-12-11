#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    gets(x);
    int n = strlen(x);
    printf("%d",n);
    return 0;
}
