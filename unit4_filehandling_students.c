#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    int roll_no;
    char name[50]; 
}S;
//  void read(char a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the element %d",i+1);
//         scanf("%d",&a[i]);
//     }
// }

// void read(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }




void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(S a[],int n)
{
    int i,j,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos].roll_no>a[j].roll_no)
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            swap(&a[pos].roll_no,&a[i].roll_no);
        }
    }
}



int main()
{
    S sd[100];
    FILE* fp=fopen("C:/Users/Janvii RV/projects/helloworld/Sem2_C/student.csv","r");
    if(fp==NULL)
    {
        printf("Error in opening File");
    }
    else
    {
        printf("Success\n");

        char line[100];
        int i=0;
        
       while(fgets(line ,100,fp)!=NULL)
        {
            
            char *roll=strtok(line,",");  //--->first colunm data
            char *sname=strtok(NULL,",");  //--->second colunm data
            sd[i].roll_no=atoi(roll);

        
            strcpy(sd[i].name,sname);
            //strcpy(sd[i]->name,sname);
            i++;
        }
        sort(sd,55);
        for(int i=0;i<55;i++)
        {
            printf("%d %s",sd[i].roll_no,sd[i].name);
        }
    }
    fclose(fp);
}