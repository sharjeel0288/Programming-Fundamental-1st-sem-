#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void avgofcourses(int a[20],int b[20],int c[20],int d[20],int e[20])
{
    int n=20;
float avg1,avg2,avg3,avg4,avg5,sum1,sum2,sum3,sum4,sum5;
for(int i=0 ; i<n;i++)
{
    printf("enter the number of %d sub  ",i+1);
    scanf("%d",&a[i]);
    sum1=sum1+a[i];
    avg1=sum1/n;
}
printf("\navg of course 1 is %f \n",avg1);
for(int i=0 ; i<n;i++)
{
    printf("enter the number of %d sub  ",i+1);
    scanf("%d",&b[i]);
    sum2=sum2+b[i];
    avg2=sum2/n;

}
printf("\navg of course 1 is %f \n",avg2);
for(int i=0 ; i<n;i++)
{
    printf("enter the number of %d sub  ",i+1);
    scanf("%d",&c[i]);
    sum3=sum3+c[i];
    avg3=sum3/n;

}
printf("\navg of course 1 is %f \n",avg3);
for(int i=0 ; i<n;i++)
{
    printf("enter the number of %d sub  ",i+1);
    scanf("%d",&d[i]);
    sum4=sum4+d[i];
    avg4=sum4/n;

}
printf("\navg of course 1 is %f \n",avg4);
for(int i=0 ; i<n;i++)
{
    printf("enter the number of %d sub  ",i+1);
    scanf("%d",&e[i]);
    sum5=sum5+e[i];
    avg5=sum5/n;

}
printf("\navg of course 1 is %f \n",avg5);

}
int main()
{   
int course1[20],course2[20],course3[20],course4[20],course5[20];
avgofcourses(course1,course2,course3,course4,course5);


return 0;
}