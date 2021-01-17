#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct hilo{
    int high,low;
}mm;
void maxmin(int arr[10])
{  
    for(int i=0;i<10;i++)
    {
    printf("enter the %d element of array " ,i+1);
    scanf("%d",&arr[i]);
    }
    mm a;
    a.high=arr[0];
    a.low=arr[0];
    for (int i =0 ; i<10;i++)
    {
        if(arr[i]>a.high)
        {
            a.high=arr[i];
        }
        else if(arr[i]<a.low)
        {
            a.low=arr[i];
        }
    }
    printf("the lowest in array is %d \nthe highest in array is %d",a.low,a.high);
}
int main()
{
int test[10];
printf("enter the integer array\n");
maxmin(test);


return 0;
}