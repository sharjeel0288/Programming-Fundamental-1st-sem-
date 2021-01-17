#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void check(float *p,int n);
int main()
{
int n;
printf("enter a size of an array : ");
scanf("%d",&n);
float arr[n];
for(int i=0;i<n;i++)
{
    printf("\n-> ");
    scanf("%f",&arr[i]);
}
check(&arr[0],n);
return 0;
}
void check(float *p,int n)
{
    for (int i=0;i<n;i++)
    {
        if(p[i]>100)
        {
            printf("The given array contain elemnt greater than 100 which is %f and on %d index\n",p[i],i);
        }
    } 
}