#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of an array : ");
    scanf("%d", &n);
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        printf("\n--> ");
        scanf("%d", &arr[i]);
    }
    int low = arr[0], count = 0;
    for (i = 0; i < n; i++)
    {
        if (low > arr[i])
            low = arr[i];
    }
    //5 10 15 
    while (1)
    {//arr   5 6 9 12
        for (i = 0; i < n; i++)
        {
            if (arr[i] % low == 0)
               { count++;
            }
        }
        if(low==2)
        {
        printf("\n\nnot found");
        break;}
        if (count == n )
            {
                printf("\n\nfound(GCD) is %d ",low);
                break;
            }
        --low;
        
        count = 0;
    }
    return 0;
}