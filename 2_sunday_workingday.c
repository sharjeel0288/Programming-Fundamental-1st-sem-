#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int n,target,yoyo=0;
printf("Enter the size of array : ");
scanf("%d",&n);
printf("\nEnter the target value : ");
scanf("%d",&target);

int arr[n+1],i=0,j=0,k=0;
arr[0]=0;
 for(i=1;i<n+1;i++)
    {
        printf("-> ");
        scanf("%d",&arr[i]);
    }
    i=0;
    printf("\n\n");
for(i=0;i<n+1;i++)
{
    for(j=0;j<n+1;j++)
    {
        for(k=0;k<n+1;k++)
        {
            if(arr[i]+arr[j]+arr[k]==target && arr[i]!=arr[j] && arr[i]!=arr[k]  && arr[j]!=arr[k])
            {
               // printf("\n\n\n  %d  ",arr[i]+arr[j]+arr[k]); 
               yoyo = 1; goto end;              
            }
        }
    }
}
end:
if(yoyo==1)
printf("\n\nYES\n\n");
else 
printf("\n\nNO\n\n");
return 0;
}