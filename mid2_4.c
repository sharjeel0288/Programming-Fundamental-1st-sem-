#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void teen(char a[],int e,int i,int t)
{
   // static int e,i,t;
    
    {
        if(a[i]=='\0')
        {
            if(e>=1 && t>=1)
            {
                printf("teen");
            }
            else
            {
                printf("not teen");
            }
            
        }
        else{
        if(a[i]=='e')
        {
            e++;
            i++;
            teen(a,e,i,t);
        }
        else if(a[i]=='t')
        {
            t++;
            i++;
            teen(a,e,i,t);
        }
        else
        {
            i++;
            teen(a,e,i,t);
        }
        }
    }
}
int main()
{
char string[100];
printf("enter a string\n");
gets(string);
teen(string,0,0,0);
return 0;
}