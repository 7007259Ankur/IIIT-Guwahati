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
 int flag; 

 for(int i=0;i<n-1;i++)
 {
    flag=0;
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
 }
 if(flag==0)
 {
    break;
 }
 }
 printf("The bubble sort is :\n");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}


}

    


