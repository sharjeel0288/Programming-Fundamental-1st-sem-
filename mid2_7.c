#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=0;
printf("enter the rows\n");
scanf("%d",&n);
//printf("enter the columns\n");
//scanf("%d",&m);
int arr[n][n];
printf("\nenter the values of matrix\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("enter the element number %d,%d of matrix : ",1+i,j+1);
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf(" %d ",arr[i][j]);
    }
    printf("\n");
}
 printf("\n");
for(i=1;i<n;i++)
{
    for(j=0;j<i;j++)
    {
       if(arr[i][j]==0)
       {
           count++;
       }
    }
}
if(count==n)
{
    printf("lower triangular matrix\n");
}
else
{count=0;
    for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
       if(arr[i][j]==0)
       {
           count++;
       }
    }
}
if(count==n)
{
    printf("upper trianglular matrix");
}
else
{
    printf("niether upper nor lower triangular matric");
}

}


return 0;
}