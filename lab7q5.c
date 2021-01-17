#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fab(int n){
	printf("0 , 1 ");
	int i,x=1,b=1,sum=0;
	for(i=0;i<n-2;i++)
	{
		
		sum=sum+b;
		b=x;			
		printf(", %d ",sum);
		x=sum;
	}
}
int main()
{
	int a;
	printf("enter the number of fibonacci series you want\n");
	scanf("%d",&a);
	fab(a);
}

