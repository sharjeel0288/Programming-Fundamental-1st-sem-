#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n=1;
int *ptr;
printf("enter the size\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
    printf("memory can not be allocated\n");
    goto a;
}
else
{
    printf("enter any input\n");
    for(int i=0;i<n;i++)
    {
        scanf(" %c",ptr+i);
    }
    //fgets(ptr,sizeof(ptr),stdin);
}
for(int i=n-1 ; i>=0 ; i--)
{
    printf("%c",*(int*)(ptr+i));
}
free(ptr);
a:
return 0;
}