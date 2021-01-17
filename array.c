#include<stdio.h>
#include<conio.h>
int main()
{
int array[8],arraypositive[8],arraynegative[8],arrayzero[8],i,p=0,n=0,z=0,sum=0;
for(i=0;i<8;i++)
{
    printf("enter the number %d : " ,i+1);
    scanf("%d",&array[i]);
    printf("\n");

    if(array[i]>0)
    {
        sum=sum+array[i];
        arraypositive[p]=array[i];
        p++;
    }
    else if(array[i]<0)
    {
        arraynegative[n]=array[i];
        n++;
    }
    else if (array[i]==0)
    {
        arrayzero[z]=array[i];
        z++;
    }
}
printf("positive numbers are \n");
for(i=0;i<p;i++)
{
    printf(" %d ",arraypositive[i]);
}
printf("\nsum of positive numbers are %d ", sum);
printf("\nnegative numbers are \n");
for(i=0;i<n;i++)
{
    printf(" %d ",arraynegative[i]);
}
printf("\nzeros  are \n");
for(i=0;i<z;i++)
{
    printf(" %d ",arrayzero[i]);
}

return 0;
}