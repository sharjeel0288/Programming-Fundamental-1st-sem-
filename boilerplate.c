#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int x,i,j,temp,temparr,raze,agent;
srand(time(NULL)); 
x=rand()%1000;
int n=3,arr[n];
for(i=0;i<n;i++)
{
    temp=x%10;
    arr[i]=temp;
    x=x/10;
}
for(i=0;i<n-1;i++)
{
    for(j=0;j=n-1-i;j++)
    {
        if(arr[j]<arr[j+1])
        {
            temparr=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temparr;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("  %d  " ,arr[i]);
}
for(i=0;;i++)
{ 
    //printf("%d",n);
    
    printf("raze's turn\n");
    scanf("%d",&raze);
    raze=raze%10;
    for(int l=1 ; l<n ; l+=2)
    {
        if(raze==arr[l])
        {
            for(int p=l ; p<n ; p++)
            {
                arr[l]=arr[l+1];
            }
            n--;
        }
    }
    if(n==1)
    {
        if(arr[0]%2==0)
        {
            printf("agent wins");
            break;
        }
        else
        {
            printf("raze wins\n");
            break;
        }
        
    }
    printf("agent's turn\n");
    scanf("%d",&agent);
    agent=agent%10;
    for(int l=0 ; l<n ; l+=2)
    {
        if(raze==arr[l])
        {
            for(int p=l ; p<n ; p++)
            {
                arr[l]=arr[l+1];
            }
            n--;
        }
    }
    if(n==1)
    {
        if(arr[n]%2==0)
        {
            printf("agent wins");
            break;
        }
        else
        {
            printf("raze wins\n");
            break;
        }
        
    }
}
return 0;
}