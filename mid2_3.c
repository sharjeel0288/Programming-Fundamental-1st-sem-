#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int count(char string[], int a)
{
    int i, j, counter=0;
    for (i = 0; i < a; i++)
    {
        if (i == 0)
        {
            //{if (string[i]>='a' || string[i]<='z')

            counter++;
            string[i] = string[i] - 32;
            
            
        }
        else if (string[i]==' ')
        {
            ++i;
            if(string[i]>='a' && string[i]<='z')
           { string[i]=string[i]-32;
            counter++;
            
           }
        }
        else
        {
            if(string[i]>='A' && string[i]<='Z')
            {
                string[i]=string[i]+32;
                counter++;
            }
        }
        
    }

    for (i = 0; i < strlen(string); i++)
    {
        printf("%c", string[i]);
    }
    return counter;
}
void del(char arr[],int n);
int main()
{
    char string[1000];
    int x;
    printf("enter a string\n");
    gets(string);
    x = strlen(string);
    //int ans = count(string, x);
   // printf("\n%d",ans);
    del(string,x);

    return 0;
}
void del(char arr[],int n)
{
    int i,j=0;
    char array[n];
    for(i=0;i<n;i++)
    {
        if(arr[i]=='?' || arr[i]=='.' || arr[i]==' ' || arr[i]==',' || arr[i]=='\'' )
       {
           continue;
       }
       else
       {
           array[j]=arr[i];
           j++;
       }
       
    }
    for(i=0;i<strlen(array);i++)
    {
        printf("%c",array[i]);
    }
}