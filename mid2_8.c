#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char string[100],sorted[100];
int j=0,i;
printf("enter a equation : ");
fgets(string,sizeof(string),stdin);

for(i=0;i<strlen(string);i++)
    {
        if(string[i]=='(' || string[i]==')')
       {
           continue;
       }
       else
       {
           sorted[j]=string[i];
           j++;
       }
       
    }
    for(i=0;i<strlen(sorted)-1;i++)
    {
        printf("%c",sorted[i]);
    }
/*for(int i=0; i <strlen(sorted);i++)
{
    printf("%c",sorted[i]);

}*/

return 0;
}