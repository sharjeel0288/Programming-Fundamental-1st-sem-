#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char string[100];
gets(string);
puts(string);
int i=0,j=strlen(string)-1;
char temp;
for(i=0;i<strlen(string)-1;i++)
{
    /*temp=string[i];
    string[i]=string[j];
    string[j]=temp;*/
    //i++;
    temp = string[j]; 
        string[j] = string[i]; 
        string[i] = temp; 
        --j; 
}
for(i=0;i<strlen(string)-1;i++)
{
    printf("%c",string[i]);
}
return 0;
}