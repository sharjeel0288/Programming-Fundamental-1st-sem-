#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n=1,lowest=0;
int *ptr;
printf("enter the size\n");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
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
        scanf("%d",ptr+i);
        
    }
    
}
lowest=ptr[0];
for(int i=0;i<n;i++)
    {
        if(lowest>ptr[i])
        {
            lowest=ptr[i];
        }
        
    }

free(ptr);
printf("lowerst value in list is %d : ", lowest);
a:
return 0;
}
