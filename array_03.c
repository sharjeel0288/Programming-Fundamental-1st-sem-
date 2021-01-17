#include<stdio.h>
#include<conio.h>
int main()
{
int temperature[7],lowest,highest=0,d,d1,i;
for(i=0;i<7;i++)
{
printf("enter the temperature of day %d : ",i+1);
scanf("%d",&temperature[i]);
if(highest<temperature[i])
{
    highest=temperature[i];
    d=i+1;
}
}
lowest=temperature[0];
for(i=0;i<7;i++)
{
if(temperature[i]<lowest)
{
    lowest=temperature[i];
    d1=i+1;
}
}
printf("the lowest temperature of week is  %d at %d day",lowest,d1);
printf("\nthe highest temperature of week is  %d at %d day",highest,d);


return 0;
}