#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add(int x,int y)
{
    return x+y;
}

int sub(int x,int y)
{
    return x-y;
}

int mul(int x,int y)
{
    return x*y;
}

int div(int x,int y)
{
    return x/y;
}

int calc(int x,int y,int (*p)(int, int))
{
    return p(x,y);
}

int main()
{
    int a,b,n;
    printf("1.Add\t2.Subtract\t3.Multiply\t4.Divide\n");
    printf("Enter number of operation: ");
    scanf("%d",&n);
    printf("Enter first no.:\n");
    scanf("%d",&a);
    printf("Enter second no.:\n");
    scanf("%d",&b);
    switch(n)
    {
        case 1:printf("%d + %d = %d",a,b,calc(a,b,add));break;
        case 2:printf("%d - %d = %d",a,b,calc(a,b,sub));break;
        case 3:printf("%d * %d = %d",a,b,calc(a,b,mul));break;
        case 4:printf("%d / %d = %d",a,b,calc(a,b,div));break;
        default:printf("Invalid Input");
    }
    return 0;
}