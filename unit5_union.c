/*
Union:
--similar to sructure.
--syntax :
        union test
        {
            int i;
            float f;
            char str[20];
        };
--each data member is given memory space separately.
--highest amt of memory allocated--->only 20 bytes.
--at a particular time only 1 data member is placed in union and can be accessed.
--Shared memory space:mutually shared memory allocation.
--offset of()--available under stddef.h--it gives the starting value.*/

#include<stdio.h>
#include<string.h>
#include<stddef.h>
/*
union test
    {
        int i;
        float f;
        char str[20];
    }t;

struct tests
{
    int i;
    float f;
    char str[20];
}t1;

int main()
{
    int a=sizeof(t);
    int b=sizeof(t1);
    printf("%d %d\n",a,b);

    t.i=1234;
    printf("%d\n",t.i);
    t.f=25.6;
    printf("%f\n",t.f);

    strcpy(t.str,"hello");
    // printf("%d\n",t.i);
    // printf("%d\n",t.f);
    printf("%s",t.str);

    return 0;
}
*/
union test1
    {
        int x;
        int y;
        int z;
    };

struct tests
{
    int x;
    int y;
    int z;
};

int main()
{
    printf("%lu\n",offsetof(struct tests,x));
    printf("%lu\n",offsetof(struct tests,y));
    printf("%lu\n",offsetof(struct tests,z));
    printf("%lu\n",offsetof(union test1 ,x));
    printf("%lu\n",offsetof(union test1 ,y));
    printf("%lu\n",offsetof(union test1 ,z));

    return 0;

}

/*union test
{
    //double q;
    //int q;
    //char str[20];
};
union test1
{
    int i;
    float f;
    char str[20];
    union test q;
};

int main()
{
    
   // printf("%lu\n",offsetof(union test,str));

    //printf("%lu\n",offsetof(union test1,i));
    //printf("%lu\n",offsetof(union test1,f));
    //printf("%lu\n",offsetof(union test1,str));

    printf("%d\n",sizeof(union test));
    printf("%d\n",sizeof(union test1));

    return 0;
}*/



//Write a c programmme using union and structure to implement the following: 
//get employee id(int) and mandatory.
//get gov id(char)==either aadhar(12 digit) or voter id(8/10).
//based on info provided by employee, check  what type og gov id is provided.
//print res as emloyee id ,gov id.

// union govr
// {
//     long int aardhar;
//     long int voter;
//     //int id;
// };
// struct company
// {
//     int emp_id;
//     union govr
//     {
//         long int aardhar;
//         long int voter;
//         //int id;
//     }g;
// }c;

// int main()
// {
//     //int a;
//     long int b;
//     char q[12];
//     printf("Enter employee id: ");
//     scanf("%d",&c.emp_id);
//     printf("Enter Government id :");
//     scanf("%lu",&b);

//     if(b==12)
//     {
//         //printf("%s",c.a);
//         scanf("%lu",c.g.aardhar);
//         printf("%lu",c.g.aardhar);
//     }
//     if(b==10)
//     {
//         //printf("%s",c.a);
//         scanf("%lu",c.g.voter);
//         printf("%lu",c.g.voter);
//     }
//     //if(strlen(c.a.q))
//     printf("%d",c.emp_id);
//     //printf("%s",c.a);
//     return 0;

// }

// Online C compiler to run C program online
// #include <stdio.h>
// #include<string.h>

// union govr
// {
//     long int aardhar;
//     long int voter;
//     //int id;
// };
// struct company
// {
//     int emp_id;
//     union govr
//     {
//         long int aadhar;
//         long int voter;
//         //int id;
//     }g;
// }c;

// int main()
// {
//     //int a;
//     long int b;
//     char q[12];
//     printf("Enter employee id: ");
//     scanf("%d",&c.emp_id);
//     printf("Enter Government id :");
//     scanf("%lu",&b);

//     if(b==12)
//     {
//         //printf("%s",c.a);
//         scanf("%lu",c.g.aadhar);
//         printf("%lu",c.g.aadhar);
//     }
//     if(b==10)
//     {
//         //printf("%s",c.a);
//         scanf("%lu",c.g.voter);
//         //printf("%lu",c.g.voter);
//     }
//     //if(strlen(c.a.q))
//     printf("%d",c.emp_id);
//     //printf("%lu",c.g.aadhar);
//     //printf("%s",c.a);
//     return 0;

/*
#include <stdio.h>
#include <string.h>

typedef union {
    char aadhar[13];  // 12 digits + null terminator
    char voterId[11]; // 10 digits + null terminator
} GovId;

typedef struct {
    int employeeId;
    GovId govId;
} Employee;

int main() {
    Employee emp;
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeId);

    printf("Enter government ID (Aadhar or Voter ID): ");
    scanf("%s", emp.govId.aadhar);

    int isAadhar = strlen(emp.govId.aadhar) == 12;

    if (isAadhar) {
        printf("Employee ID: %d\nGovernment ID: %s\n", emp.employeeId, emp.govId.aadhar);
    } else {
        printf("Employee ID: %d\nGovernment ID: %s\n", emp.employeeId, emp.govId.voterId);
    }

    return 0;
}*/