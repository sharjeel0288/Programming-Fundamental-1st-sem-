#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct checkingacc
{
   char name[24];
   int acc_no;
   double  balance , interest;
}acc;
int main()
{
    acc *p;
    printf("enter the number of records you want to enter \n");
    int n;
    scanf("%d",&n);
    fflush(stdin);
    p=(acc*)calloc(n,sizeof(p));
    for (int i=0;i<n;i++)
    {
        printf("enter the account holder name : ");
        fgets((p+i)->name,sizeof((p+i)->name),stdin);
        fflush(stdin);
        printf("\nenter account number : ");
        scanf("%d",&(p+i)->acc_no);
        fflush(stdin);
        printf("\nenter balance : ");
        scanf("%lf",&(p+i)->balance);
        fflush(stdin);
        printf("\nenter interest rate : ");
        scanf("%lf",&(p+i)->interest);
        fflush(stdin);
        printf("\n");
    }
     for (int i=0;i<n;i++)
    {
        printf("account name " );
        puts((p+i)->name);
        printf("account number %d",(p+i)->acc_no);
        printf("\naccount balance %lf",(p+i)->balance);
        printf("\naccount interest rate %lf",(p+i)->interest);
        printf("\n");
        
    }
return 0;
}