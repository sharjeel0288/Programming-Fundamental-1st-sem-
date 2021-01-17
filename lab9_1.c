#include<stdio.h>
#include<stdlib.h>
void func(void **ptr1)
{
    printf("the value is %d\n",*(int*)*ptr1);
    printf("the value is %c\n",*(char*)*ptr1);
    printf("the value is %.2f\n",*(float*)*ptr1);
}
int main()
{

int n=1;
void *ptr;
//printf("enter the size\n");
//scanf("%d",&n);
ptr=(void*)calloc(n,sizeof(void));
if(ptr==NULL)
{
    printf("memory can not be allocated\n");
    goto a;
}
else
{
    printf("enter any input\n");
    scanf("%f",ptr);
}

func(&ptr);
free(ptr);
a:
return 0;
}