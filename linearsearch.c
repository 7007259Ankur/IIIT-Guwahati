#include<stdio.h>
int main()
{
    printf("Enter the size of array :\n");
    int n;
    scanf("%d",&n);
    printf("Enter the array:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key value:\n");
    int data;
    scanf("%d",&data);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(data==i)
        {
            flag=1;
          break;
        }
    }
    if(flag==1)
    {
        printf("Yes is present in the array: %d\n",data);
    }
    else{
        printf("No is not present in array:\n");
    }
}