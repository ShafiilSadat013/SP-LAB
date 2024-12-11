#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char x[1000];
    gets(x);
    //x=tolower(x);
    int v=0,c=0;
    int n = strlen(x);
    for(int i=0;i<n;++i)
    {
        char gun = tolower(x[i]);
        if(gun>='a' && gun<='z'){
        if(gun =='a'|| gun =='e'||gun=='i'||gun=='o'||gun=='u')

            {
                v++;
            }

            else
            {
                c++;

            }
        }

    }

    printf("number of vowels %d \n",v);
    printf("number of consonant %d ",c);

    return 0;
}
