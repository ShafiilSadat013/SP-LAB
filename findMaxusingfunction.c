#include<stdio.h>
int findmax(int arr[],int n)
    
    {
        int mx= arr[0];
        for (int i=i;i<n;++i)
        {
            if(mx<arr[i])
                mx= arr[i];
        }
        return mx;
    }
    

    int main()
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);

        int mx =  findmax(arr,n);
        printf("Max is %d",mx);

        return 0;
    }
