#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void pail(char *p,int l);
int main()
{
    printf("ENTER A STRING : ");
char *ptr; int n=1,i;
ptr=(char*)malloc(n*sizeof(ptr));
for(i=0; ;i++)
{
    scanf("%c",&ptr[i]);
    if(ptr[i]=='\n')
    break;
    ptr=(char*)realloc(ptr,++n);
}
char new[n-1];
for(i=0;i<n;i++)
{
    new[i]=ptr[i];
}
new[i]='\0';
free(ptr);

if((strlen(new)-1)%2==0)
{
    printf("string length is not odd therefore exiting ");
    exit(1);
}

pail(&new[0],strlen(new)-1);
return 0;
}
void pail(char *p,int l)
{
    static int i=0,count=0;
    if(i==l)
    {
        if(count==(l)/2)
        printf("paildrome");
        else 
        printf("Not");
    }
    else if(p[i]==p[l-1-i])
    {
        count++; i++;
        pail(&p[i],l);
    }
    else
    {
        i++;
        pail(&p[i],l);
    }
    
}