#include<stdio.h>
#include<string.h>
int main()
{
    char x[1000];
    gets(x);
    int v=0,c=0;
    int n = strlen(x);
    for(int i=0;i<n;++i)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')

            {
                v++;
            }

            else
            {
                c++;

            }

    }

    printf("number of vowels %d \n",v);
    printf("number of consonant %d ",c);

    return 0;
}
