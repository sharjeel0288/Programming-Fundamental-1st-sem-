/*Write a program in C that creates structure EMPLOYEE. The EMPLOYEE
structure contains the following members: Name, ID, Salary, Address (flat/house
no, street, Area, city, Country), Age and Designation. Store and Print 10-
employee list by using array of Structures.
**Here Address is inner struct in Employee.*/
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
void average(emp *ptr,int n, float *avg);
int main()
{ int n=2;
    emp E[n];
    float avg=0;
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
        
        
    }

    average(&E[0],n,&avg);
    printf("\nAVERAGE OF %d EMPLOYEES IS %f \n",n,avg);
return 0;
}
void average( emp *ptr,int n, float *avg)
{
    int i =0;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=ptr[i].salary;
    }
    sum=sum/n;
    *avg=sum;
}