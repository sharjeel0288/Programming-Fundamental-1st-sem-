/*Write a structure to store the name, account number and balance of customers
(more than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less
than 2000 PKR.
2 - Add 1000 PKR in the balance of all the customers having more than 2000 in
their balance by using Pointers in structure then print the incremented value of
their balance.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct emp
{
    char name[20],add[50],designation[25];
    int id,age;
    float salary;
}emp;
void average(emp *ptr,int n);
int main()
{ int n=10;
    emp E[n];
 
    for(int i =0 ; i<n;i++)
    {
        printf("\n\n**enter record for employee no# %d **\n",1+i);
        printf("enter name ");
        gets(E[i].name);
        fflush(stdin);
        printf("enter address ");
        gets(E[i].add);
        fflush(stdin);
        printf("enter designation ");
        gets(E[i].designation);
        fflush(stdin);
        printf("enter age ");
        scanf("%d",&E[i].age);fflush(stdin);
        printf("enter ID ");
        scanf("%d",&E[i].id);fflush(stdin);
        printf("enter salary ");
        scanf("%f",&E[i].salary);fflush(stdin);
        
        
    } average( &E[0], n);
    printf("\n\nAFTER INCREMENT OF 1000 PKR \n");
    for(int i=0;i<n;i++)
    {
        if(E[i].salary>=2000)
        printf("%f",E[i].salary);
    }

    
   
return 0;
}
void average( emp *ptr,int n)
{
    int i =0;
    printf("\n\nNAME OF EMPLOYEES WHOSE SALARY ARE BELOW 2000 PKR\n");
    for(i=0;i<n;i++)
    {
        if(ptr[i].salary<2000)
        puts(ptr[i].name);
        
        else if(ptr[i].salary>=2000)
            ptr[i].salary+=1000;
        
    }
}