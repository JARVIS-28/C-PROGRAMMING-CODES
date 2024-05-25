//count no. of matches palyed int he year 2008
//clacqulate no of matches played in each year.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int main()
// {
//     FILE* fp=fopen("C:/Users/Janvii RV/projects/helloworld/Sem2_C/matches.csv","r");
//     if(fp==NULL)
//     {
//         printf("Error in opening File");
//     }
//     else
//     {
//         printf("Success\n");

//         char line[500];
//         int count=0;

//         while(fgets(line ,500,fp)!=NULL)
//         {
//             //printf("%s\n",strtok(line,","));
//             strtok(line,",");  //--->first colunm data
//             char *year=strtok(NULL , ",");
//            // printf("%s\n",year);

//             if(!strcmp(year,"2008"))
//             {
//                 count++;
//             }
//         }
//         printf("Matches played in 2008: %d",count);
//     }

//     fclose(fp);
// }


//2.
// int main()
// {
//     FILE* fp=fopen("C:/Users/Janvii RV/projects/helloworld/Sem2_C/matches.csv","r");
//     if(fp==NULL)
//     {
//         printf("Error opening the file!");
//     }
//     else
//     {
//         printf("Success\n");
//         char line[500];
//         int count=0;
//         while(fgets(line,500,fp)!=NULL)
//         {
//             strtok(line,",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
            
//             char *toss=strtok(NULL , ",");
            
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             char *winner=strtok(NULL , ",");
//             //printf("%s ",winner);
//             if(!strcmp(toss,winner))
//             {
//                 count++;
//             }

//         }
//         printf("Toss winner and match Winner: %d",count);

//     }
//     fclose(fp);
// }

//3.  (ANS:18)

// int main()
// {
//     FILE* fp=fopen("C:/Users/Janvii RV/projects/helloworld/Sem2_C/matches.csv","r");
//     if(fp==NULL)
//     {
//         printf("Error opening the file!");
//     }
//     else
//     {
//         printf("Success\n");
//         char line[500];
//         int count=0;
//         while(fgets(line,500,fp)!=NULL)
//         {
//             strtok(line,",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             char *team1=strtok(NULL , ",");
//             char *team2=strtok(NULL , ",");
//             //printf("%s\n",team1);
//             //printf("%s\n",team2);
           
            
//             if(!strcmp(team1,"Royal Challengers Bangalore") && !strcmp(team2,"Kolkata Knight Riders"))
//             {
//                 count++;
//             }
//             if((!strcmp(team2,"Royal Challengers Bangalore")) && (!strcmp(team1,"Kolkata Knight Riders")) ) 
//             {
                
//                 count++;

//             }
//         }
//         printf("No. of matches b/w RCB and KKR: %d",count);
//     }
//     fclose(fp);
// }


//4.  (ANS:)

// int main()
// {
//     FILE* fp=fopen("C:/Users/Janvii RV/projects/helloworld/Sem2_C/matches.csv","r");
//     if(fp==NULL)
//     {
//         printf("Error opening the file!");
//     }
//     else
//     {
//         printf("Success\n");
//         char line[500];
//         int count=0;
//         while(fgets(line,500,fp)!=NULL)
//         {
//             strtok(line,",");
//             char *year=strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             strtok(NULL , ",");
//             char *winner=strtok(NULL , ",");
//             if(!strcmp(year,"2016"))
//             {
//                 printf("Winners:%s",winner);
            
    
//             }

//         }                    
              
//     }
//     fclose(fp);
// }