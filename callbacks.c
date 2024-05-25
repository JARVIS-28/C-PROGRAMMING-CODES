#include<stdio.h>
#include<stdlib.h>


int increment(int x)
{
    return x+5;
}

int even(int x)
{
    return x%2==0;
}

int add(int x,int y)
{
    return x+y;
}

void disp(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void my_map(int a[],int b[],int n,int (*p)(int))
{
    for(int i=0;i<n;i++)
    {
        b[i]=(*p)(a[i]);
    }
}

void my_filter(int a[],int b[],int n,int (*p)(int))
{
    int z=0;
    for(int i=0;i<n;i++)
    {
        if((*p)(a[i]))
        {
            b[z]=a[i];
            z++;
        }
    }
}


int main()
{
    int a[]={10,20,30,40,51};
    int b[5];int d=3;
    int n;
   // disp(a,5);
    printf("\n");
    //my_map(a,b,5,increment);
   // int c=even(d);
   // printf("%d",d);
    //filter function
    int m;
    my_filter(a,b,n,even);
   
   disp(b,5);

   //
}