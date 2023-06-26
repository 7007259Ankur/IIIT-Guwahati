#include<stdio.h>
int main()
{
    printf("Enter the size of array:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the array :\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp,j;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("The Insertion sort is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

