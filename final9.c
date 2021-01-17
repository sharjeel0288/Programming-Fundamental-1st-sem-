#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Write a program that reads a sentence (string) as input from the user. It should then pass this sentence
to a function using double pointer. The function should simply find number of vowels in each individual
word of the sentence.*/
void dp(char **ptr);
int main()
{
printf("ENTER A STRING : ");
char *ptr; int n=1,i;
ptr=(char*)malloc(n*sizeof(ptr));
for(i=0; ;i++)
{
    scanf("%c",&ptr[i]);
    if(ptr[i]=='\n')
    break;// a b c d e
    ptr=(char*)realloc(ptr,++n);
}// char a[]="pie" gets(a)
ptr[i]='\0';
dp(&ptr);
return 0;
}
void dp(char **ptr)
{//this is cat
    char *token=strtok(*ptr," ");
    int count=0;
    while(token!=NULL)
    {
       
        for(int i=0;i<strlen(token);i++)
        {
            if((token[i] == 'a' || token[i] == 'A' || token[i] == 'e' || token[i] == 'E' || token[i] == 'i' || token[i] == 'I' || token[i] == 'o' || token[i] == 'O' || token[i] == 'u' || token[i] == 'U'))
            {
                count++;
            }
        }
        printf("\nword  %s contain %d vowels ",token,count);
        count=0;
        token = strtok(NULL, " ");
    }
}