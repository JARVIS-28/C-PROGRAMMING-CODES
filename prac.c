#include<stdio.h>
int main()
{
    char a[]="ATMATRISHA";
    printf("%s\t",a);
    *(a+4)='t';
    printf("%s",a);
    return 0;
}