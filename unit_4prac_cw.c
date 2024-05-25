#include<stdio.h>
#include<stdbool.h>

int mysearch(int a[],int low,int high,int key)
{
    if(low>high)
    {
        return -1;
    }
    else
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return mysearch(a,low,mid-1,key);
        }
        else
        {
            return mysearch(a,mid+1,high,key);
        }
    }
}

int main()
{
    int a[20],n;
     for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a);

    int x;
    scanf("%d",&x);
    int low=a[0];
    int high=a[n-1];

    int ans= mysearch(a,low,high,x);
    if(ans=-1)
    {
        printf("HERE");
    }


    
 }