/*Calculate the Sizeof() Struct EMPLOYEE.*/
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

int main()
{
    printf("SIZE OF STRUCT EMP IS : %d",sizeof(emp));

return 0;
}