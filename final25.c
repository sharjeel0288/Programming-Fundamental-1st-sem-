#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fibonacci(int c, int a, int b,int n);
int main()
{
	int a=0, b=1, c;
    int n;
    printf("how many no of fionacci do you want : ");
    scanf("%d",&n);
	printf("%d %d",a,b);
	fibonacci(c,a,b,n);
}
void fibonacci(int c, int a, int b,int n)
{
	static int count = 2;
	if(count>=n)
	return ;
	else
	{
		c=b+a;
		a=c+b;
		b=a+c;
		count=count+3;
		printf(" %d %d %d",c,a,b);
		fibonacci(c,a,b,n);
	}
}