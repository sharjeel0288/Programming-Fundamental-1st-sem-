#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char arr[20];
printf("Enter a string : ");
gets(arr);
char match[]="WAR";//this is a ball
int i,j,counter=0;
for(i=0;i<strlen(arr);i++)
{
    for(j=0;j<strlen(match);j++)
    {
        if(arr[j+i]==match[j])
        {//printf("  %d  ",counter);
            counter++;
            if(counter==strlen(match)-1)
            {
                printf("Your string is : ");
                puts(arr);
                return 1;
            }
        }
    }counter=0;
}
char new[20];
for(i=0; i<strlen(arr);i++)
{
    if(arr[i]=='a' || arr[i]=='A' || arr[i]=='e' || arr[i]=='E' || arr[i]=='I' || arr[i]=='i' || arr[i]=='o' || arr[i]=='O' || arr[i]=='u' || arr[i]=='U')
    {
        new[i]=arr[i]+3;
    }
    else if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z'))
    {
        new[i]=arr[i]-2;
    }
    else
    {
        new[i]=arr[i];
    }
    
}
new[i]='\0';
printf("string before encrypting : ");
puts(arr);
printf("After encrypting string : ");
puts(new);
return 0;
}