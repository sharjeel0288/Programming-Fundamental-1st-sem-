#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void shift_left(int arr[],int num)
{
    int i,temp=arr[0];
    for(i=0;i<num;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[num-1]=temp;
    for(i=0;i<num;i++)
    {
        printf(" %d ",arr[i]);
    }
}

int main()
{
    int n,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
int array[n];
printf("enter elements of array\n");
for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
shift_left(array,n);
return 0;
}