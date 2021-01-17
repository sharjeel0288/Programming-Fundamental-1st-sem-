#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int rem(char **p,int n);
int main()
{
printf("ENTER A STRING : ");
char *ptr; int n=1,i;
ptr=(char*)malloc(n*sizeof(ptr));// char c &c[0]
for(i=0; ;i++)
{//this is
    scanf("%c",&ptr[i]);
    if(ptr[i]=='\n')
    break;// a b c d e
    ptr=(char*)realloc(ptr,++n);
}
ptr[i]='\0';
printf("\nBefore removing spaces : ");
puts(ptr);
int spaces;
spaces=rem(&ptr,n);
printf("After removing %d spaces :  ",spaces);
puts(ptr);
return 0;
}
int rem(char **p,int n)
{
    int i,j,counter=0;//a b  c
    for(i=0;i<n;i++)
    {
        if(*(*p+i) == ' ' && *(*p+i+1) == ' ')
        {i--;
            counter++;
            for(j=i+1;j<n;j++)
            {
               *(*p+j)=*(*p+j+1);
            }
            n--;
        }
    }
    p[i]='\0';
    return counter;
}