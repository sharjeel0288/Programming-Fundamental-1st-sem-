#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int num,lowest;
printf("enter size : ");
scanf("%d",&num);
int *ptr;
ptr=(int*)malloc(num*sizeof(ptr));

for(int i=0 ; i<num ; i++)
{
    printf("-> ");
    scanf("%d\n",&ptr[i]);
}
lowest=  ptr[0]  ;
for(int i=0; i< num ;i++)
{
    if(lowest > ptr[i])
    lowest=ptr[i];
}

printf("\n***LOWEST : %d ***\n",lowest);
return 0;
}