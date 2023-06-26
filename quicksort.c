#include<stdio.h>
#define swap(x, y) { int temp = x; x = y; y = temp; }
int partion(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;

    }

 void quicksort(int a[],int lb,int ub)
 {int loc;
    if(lb<ub)
    {
     loc=partion(a,lb,ub);
     quicksort(a,lb,loc-1);
     quicksort(a,loc+1,ub);
    }
 }
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

int main()
{
    printf("Enter the size of array:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the array:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int lb=0;
    int ub=n;
    print(arr,n);
  
   printf("%d",partion(arr,lb,ub));
   printf("\n");
   quicksort(arr,lb,ub);
    
   print(arr,n);

}