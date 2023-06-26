#include<stdio.h>
int main()
{
    printf("Enter the size of array:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the sorted array:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the data :\n");
    int data;
    scanf("%d",&data);
    int mid;
    int l=0;
    int r=n-1;
    int flag=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==arr[mid])
        {
            printf("Data found:\n");
            flag=1;
            break;
        }
        else if(data>arr[mid])
        {
            l=mid+1;

        }else
        {
            r=mid-1;
        }

    }
    if(flag==0)
    {
        printf("Data not found\n");
    }

}