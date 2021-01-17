#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i=0,sum=0;
    printf("enter the size of array\n");
    scanf("%d",&n); 
    int *arr=malloc(n+sizeof(int)); 
    for (i=0;i<n;i++)
    {
        printf("enter the %d element of array ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
       
    } 
    free(arr);
    printf("sum is %d ", sum);
    
    return 0;
}
