#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void reverseArray(int *array, int leftIndex, int rightIndex);
int main()
{
int n;
printf("enter the size if array : ");
scanf("%d",&n);
int arr[n],i,k;
for(i=0;i<n;i++)
{
    printf("\nenter the element no %d : ",1+i);
    scanf("%d",&arr[i]);
}
reverseArray(&arr[0],0,n-1);
printf("\n\nAfter reversing an array :  ");
for(i=0;i<n;i++)
{
    printf(" %d  ",arr[i]);

}
return 0;
}

void reverseArray(int *array, int leftIndex, int rightIndex){
    int temp;
    if(leftIndex <= rightIndex){
    
     temp = array[leftIndex];
     array[leftIndex] = array[rightIndex];
     array[rightIndex] = temp;
     
     reverseArray(array, leftIndex+1, rightIndex-1);
    }
}