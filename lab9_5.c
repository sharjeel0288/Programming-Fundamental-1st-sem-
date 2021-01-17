#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void sd_avg_sum(int n, int s[] , int *ptrsum , float *ptravg , float *ptrsd)
{
int i,j,u,temp;
for( i=0 ; i < n ; i++)
{
*ptrsum+=s[i];
}
*ptravg= (float) *ptrsum/n ;
float sdsum=0;
for( i=0 ; i < n ; i++)
{
temp=s[i] - *ptravg;
sdsum+=(temp*temp);
//printf("s%d is %f",i+1,sdsum);
}
// printf("sum of sd is %f \n",sdsum);
*ptrsd =sqrt(sdsum/n);
}
int main()
{
int num=5,sum=0;
float avg , sd;
int arr[num];
for(int i =0 ; i < num;i++)
{
printf("enter number %d in array ",i+1);
scanf("%d",&arr[i]);
}
sd_avg_sum(num , arr,&sum,&avg,&sd);
printf("the sum of given numbers are %d \n",sum);
printf("the average of given numbers are %.2f \n",avg);
printf("the sd of given numbers are %f \n",sd);
return 0;
}