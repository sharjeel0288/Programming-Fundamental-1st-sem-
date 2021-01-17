#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void multiply(int *ptrA, int *ptrB, int n)
{
	int C[n][n],i,j,k;
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum=0;
			for(k=0; k<n; k++)
			{
				sum += (*((ptrA +(n*i) + k)) * *((ptrB + k + (n*j))));
				
				 
			}
            C[i][j]=sum;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf(" %d ",C[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int i,j;
	int n;
	printf("Enter size of square matrix: ");
	scanf("%d",&n);
	int A[n][n];
	printf("Enter elements of matrix A\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter element (%d,%d): ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter elements of matrix B\n");
	int B[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter element (%d,%d): ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	multiply(&A[0][0], &B[0][0], n);
}