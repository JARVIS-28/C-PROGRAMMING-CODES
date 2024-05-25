/*
Create an enum with all the 4 directions. 
Use switch case statements to get integer i/p from user 
and switch b/w direction elementds and 
print o/p based on direction name.
*/

#include<stdio.h>

enum direction
{
    N=1,S=2,E=3,W=4
};

int main()
{
    enum direction dir;
    int i;
    printf("Enter the direction\n");
    scanf("%d",&i);
    for(int j=0;j<=i;j++)
    {
         switch(i)
    {
        case 1: dir=1; break;
        case 2: dir=2; break;
        case 3: dir=3; break;
        case 4: dir=4; break;
        default: dir=-1; break;
    }
    switch(dir)
    {
        case 1: printf("North\n"); break;
        case 2: printf("South\n"); break;
        case 3: printf("East\n"); break;
        case 4: printf("West\n"); break;
        default: printf("Invalid Direction\n"); break;
    }
    }
    // switch(i)
    // {
    //     case 1: dir=1; break;
    //     case 2: dir=2; break;
    //     case 3: dir=3; break;
    //     case 4: dir=4; break;
    //     default: dir=-1; break;
    // }
    // switch(dir)
    // {
    //     case 1: printf("North\n"); break;
    //     case 2: printf("South\n"); break;
    //     case 3: printf("East\n"); break;
    //     case 4: printf("West\n"); break;
    //     default: printf("Invalid Direction\n"); break;
    // }
}

/*
Create an enum of flags for integral values raised to the power of 2.
Set 3 flags crop, rotate andd save based on setting of flag display the options.
*/

/*
Using structure and enum in c write a program for the following problem statement.
*/