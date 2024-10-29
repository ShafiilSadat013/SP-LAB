#include<stdio.h>
int findmin(int arr[],int n)

    {
        int min= arr[0];
        for (int i=i;i<n;++i)
        {
            if(min>arr[i])
                min= arr[i];
        }
        return min;
    }


    int main()
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);

        int mn =  findmin(arr,n);
        printf("Min is %d",mn);

        return 0;
    }
