#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter array size : ");
    scanf("%d",&n);
    int arr[n],rev=0,remainder;
    int i = 0,count=0;
    for(i=0;i<n;i++)
    {
        printf("-> ");
        scanf("%d",&arr[i]);
    }
    i=0;
    while(1)
    {
         remainder = arr[i] % 10;
        rev = rev * 10 + remainder;
        arr[i] /= 10;
        if(arr[i]==0)
        {
            for(int j=0;i<n;j++)
            {
                if(rev==arr[j])
                {
                    count++;
                    if(count==n/2)
                    break;
                }
            }
            i++;
            rev=0;
            remainder=0;
        }
        if(count==n/2)
        break;
    }
   
    if(count == n/2)
    printf("\n\nYES\n");
    else
    {
        printf("\n\nNO\n");
    }
    
    return 0;
}