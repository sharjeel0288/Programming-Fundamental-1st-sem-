#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char nic[11] ;
long int mid;
printf("enter your nic without gap : ");
gets(nic);
printf("Enter the middle part of nic : ");
scanf("%ld",&mid);
int i , sum=0,temp=0;
for( i=0;mid!=0;i++)
{
    temp=mid%10;
    sum+=temp;
    mid/=10;
}
sum=sum/3;
printf("digits sum divided by 3 is %d\nNow the diagonal printing of NIC string is\n",sum);
for(i=0;i<sum;i++)
{
    for(int j=0;j<=i;j++)
    {
        if(j==i)
        {
            printf("%c",nic[i]);
        }
        else
        {
            printf("  ");
        }
        
    }printf("\n");
}

return 0;
}