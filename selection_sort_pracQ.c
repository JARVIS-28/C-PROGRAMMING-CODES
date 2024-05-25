#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void readArr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void dispArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int a[],int n)
{
    int i,j,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos=j;
        }
        if(pos!=i)
        {
            swap(&a[pos],&a[i]);
        }
    }
}
int main()
{
    int n,m;
    int sum=0;
    int z=0;
    int Keysize[100];
    int freqArray[100];
    int b[100];
    scanf("%d",&m);
    readArr(freqArray,m);
    scanf("%d",&n);
    readArr(Keysize,n);

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=Keysize[i];j++)
        {
            b[z]=j;
            z++;
        }
    }

    sort(b,z);
    sort(freqArray,m);

    for(int i=0;i<m;i++)
    {
        sum=sum +freqArray[m-1-i]*b[i];
    }

    printf("Answer: %d",sum);
    return 0;
   
}