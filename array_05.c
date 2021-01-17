#include<stdio.h>
#include<conio.h>
int main()
{
int salary[6]={50,70,55,66,67,72},sum=0,highest,i,a=0,assending[6],j;
int n=6;
float avg;
for(i=0;i<n;i++)
{
    sum=sum+salary[i];
    if(salary[i]>highest)
    {
        highest=salary[i];
    }
}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(salary[j]>salary[j+1])
        {
            a=salary[j];      //storing jth index
            salary[j]=salary[j+1];  //assiging j+1th index on jth
            salary[j+1]=a;   //assign jth index which is stored in a in j+1th index
           
        }
    }
}
avg=sum/6;
printf("sum of total salaries are %d : ",sum);
printf("\navg of six month salaries are : %f  \n", avg);
printf("\nin assending order\n");
for(i=0;i<6;i++)
{
    printf(" %d ",salary[i]);
}
return 0;
}