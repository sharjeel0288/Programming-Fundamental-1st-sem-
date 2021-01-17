#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct menu
{
   char itemname[24];
   double  menueprice;
}menu;
int main()
{
    menu *p;
    printf("enter the number of records you want to enter \n");
    int n;
    scanf("%d",&n);
    fflush(stdin);
    p=(menu*)calloc(n,sizeof(p));
    for (int i=0;i<n;i++)
    {
        printf("enter the menu name : ");
        fgets((p+i)->itemname,sizeof((p+i)->itemname),stdin);
        fflush(stdin);
        printf("\nenter the price of item : ");
        scanf("%lf",&(p+i)->menueprice);
        //fflush(stdin);
        printf("\n");
    }
     for (int i=0;i<n;i++)
    {
        printf("menu name is " );
        puts((p+i)->itemname);
        printf("\nprice of item is %lf",(p+i)->menueprice);printf("\n");
        
    }
return 0;
}