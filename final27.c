/* Write a program in C to get the largest element of an array using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25  */
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int ga(int *p,int n,int g,int i);
int main()
{
    int i,n[5];
    for(i=0;i<5;i++)
    {
        printf("\n-> ");
        scanf("%d",&n[i]);
    }

int great=ga(n,5,0,0);
printf("\n\nGreatest is %d",great);
return 0;
}
int ga(int *p,int n,int g,int i)
{
  
    
    if(i==n-1)
    {return g;
        
    }
  else
  {
      if(g<p[i])
        g=p[i];
       // printf(" %d %d  \n",i,g);
        
        ga(&p[i++],n,g,i);
  }
  
}