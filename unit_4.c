//  #include<stdio.h>
//  #include<stdbool.h>


//  int main()
//  {
//     int a[20],n;
//      for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     bool flag=false;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int x;
//     scanf("%d",&x);
//     int low=a[0];
//     int high=a[n-1];

//    


    
//  }




//Binary Search:
/*#include<stdio.h>

int mysearch(int a[],int low,int high,int key)
{
    int pos=-1;
    int found=0;
    while(low<=high && found=0)
    {
        int mid=(low+high)/2;
        if(a[mid==key])
        {
            pos=mid;
            found=0;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
            
    }
    
}*/


//Iterative search:

/*#include<stdio.h>

int mysearch(int a[],int low,int high,int key)
{
    int pos=-1;
    int found=0;
    while(low<=high && found=0)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            pos=mid;
            found=1;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid-1;
        }
    }
    return pos;
}*/

//recursive solution
/*#include<stdio.h>

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
    int a[20];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf()
    }
}*/

    
