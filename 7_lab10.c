/*Write a program to compare two dates entered by user. Make a structure named
Date to store the elements day, month and year to store the dates. If the dates are
equal, display "Dates are equal" otherwise display "Dates are not equal".*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct date
{
   int year,month,day;
}date;

int main()
{
    date d1,d2;
    printf("enter year of 1st date : ");
    scanf("%d",&d1.year);
    printf("enter month of 1st date : ");
    scanf("%d",&d1.month);
    while(d1.month>=13)
    {
        printf("please enter correct month of 1st date : ");
    scanf("%d",&d1.month);
    }
    printf("enter day of 1st date : ");
    scanf("%d",&d1.day);
    
    while(d1.day>=32)
    {
        printf("please enter correct day of 1st date : ");
    scanf("%d",&d1.day);
    }

printf("enter year of 2nd date : ");
    scanf("%d",&d2.year);
    printf("enter month of 12nd date : ");
    scanf("%d",&d2.month);
    while(d2.month>=13)
    {
        printf("please enter correct month of 2nd date : ");
    scanf("%d",&d2.month);
    }
    printf("enter day of 2nd date : ");
    scanf("%d",&d2.day);
    
    while(d2.day>=32)
    {
        printf("please enter correct day of 2nd date : ");
    scanf("%d",&d2.day);
    }
    
    if(d1.day==d2.day && d1.month==d2.month  &&  d1.year==d2.year)
    printf("\ndates are equal");
    else
    printf("\ndates are not equal\n");
return 0;
}