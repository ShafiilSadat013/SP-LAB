#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;++i){
    int rating ;
    scanf("%d",&rating);

    if(rating>=1900) printf("Case %d : division 1\n",i);
    else if(rating>=1600&&rating<=1899) printf("Case %d : division 2\n",i);
    else if(rating>=1400&&rating<=1599) printf("Case %d : division 3\n",i);
    else if(rating<=1399) printf("Case %d : division 4\n",i);

    }

    return 0;
}
