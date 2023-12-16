#include<stdio.h>
int b_search(int[],int,int);
int main()
{
    int a[10],n,i,k,index;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&k);
    index=b_search(a,n,k);
    if(index == -1)
    {
        printf("element not found");
    }
    else
    {

        printf("element found at   %d",index);
    }
    return 0;
}
int b_search(int a[10],int n,int k)
{
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]>k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        return -1;
    }
}
 


