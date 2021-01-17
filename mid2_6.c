#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void myfunc(int a)
{

 int sum=0,i,lt=0,slt=1;
    if(i!=a)
    {
    sum+=lt;
    lt=slt;
    printf(" %d ",sum);
    slt=sum;
     i++;
    myfunc(a);
    }
}
int main()
{
int x;
printf("enter a number\n");
scanf("%d",&x);
myfunc(x);
return 0;
}