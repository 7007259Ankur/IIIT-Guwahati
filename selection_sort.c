#include<stdio.h>
#define swap(a,b) a=a+b,b=a-b,a=a-b; 
int main()
{
    printf("Enter the size of array:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[min],arr[i])

        }
    }
    printf("The selection sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}