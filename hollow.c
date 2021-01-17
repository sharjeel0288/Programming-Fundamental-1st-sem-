#include<stdio.h>
#include<conio.h>
int main()
{
int totalrows,i,j,k;
printf("enter the total rows : ");
scanf("%d",&totalrows);
if(totalrows%2==0)
    {k=((totalrows-1)/2);}
else if(totalrows%2!=0)
    {k=((totalrows)/2);}




for(i=0 ; i<totalrows ; i++)
{
    if(i<totalrows/2)
    {
    for(j=0;j<totalrows;j++)
    {
        if(j==((totalrows-1)/2)+i || j==((totalrows-1)/2)-i )
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        
    }
    printf("\n");
    }
    else
    {
        for(j=0;j<totalrows;j++)
    {
        if(j==((totalrows-1)/2)+k || j==((totalrows-1)/2)-k)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        
    }k--;
    printf("\n");
    }
    
}
return 0;
}