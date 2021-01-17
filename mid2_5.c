#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void transpose(int matrix[3][2], int row, int column);
int main()
{
int n=3,m=2,i,j;
//printf("enter the rows\n");
//scanf("%d",&n);
//printf("enter the columns\n");
//scanf("%d",&m);
int arr[n][m];
printf("enter the values of matrix\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("enter the element number %d,%d of matrix : ",1+i,j+1);
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf(" %d ",arr[i][j]);
    }
    printf("\n");
}

transpose(arr,n,m);
return 0;
}
void transpose(int matrix[3][2],int row, int column)
{
    int trans[2][3];
    for(int i=0 ; i<column;i++)
    {
        for(int j=0 ;j<row;j++)
        {
            trans[i][j]=matrix[j][i];
        }
    }
    for(int i = 0 ; i<column ;i++)
    {
        for(int j=0 ;j<row;j++)
        {
            printf(" %d ",trans[i][j]);
        }
    printf("\n");
    }
}