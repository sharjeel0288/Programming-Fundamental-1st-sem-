#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
char str[][50]={"we will teach you how to","move a mountain","level a building"};
char    new[3][50];
char str1[30],str2[30];
printf("enter str1 : ");
gets(str1);
printf("enter str2 : ");
gets(str2);
int i,j=0,loop=1,counter=0,counter2=0;

//puts(token);
A:
printf("");
char *token=strtok(str[j]," ");
    while(token!=NULL)
    {//printf("in loop\n");
        if(strcmp(token,str1)==0)
        {//printf("match\n");
            for(i=0;i<strlen(str2);i++)
            {//printf("in loop of match\n");
                new[counter][counter2++]=str2[i];
               // printf("       %c",new[counter][i]);
            }
            new[counter][counter2++]=' ';
        }
        else
        {
            for(i=0;i<strlen(token);i++)
            {
                new[counter][counter2++]=token[i];
                // printf("      %c",new[counter][i]);
            }
             new[counter][counter2++]=' ';
        }
       // puts(token);
        
        token=strtok(NULL," ");
       // puts(token);
    }
    new[counter][counter2++]='\0';
    counter++;
    counter2=0;
    j++;
    while(j!=3)
    goto A;

for(i=0;i<3;i++)
{
    puts(new[i]);
}
return 0;
}