#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char string[])
{   
    for (int i=strlen(string)-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }
}
int main(){
    char string[100];
    printf("enter the string\n");
    gets(string);
    reverse(string);

return 0;
}