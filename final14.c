#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void replace();
void del();
void age();
void sal();
typedef struct
{
    int dep_id;
    char dep_name[30];
} dep;

typedef struct
{
    char emp_name[30];
    int emp_id, age;
    float salary;
    dep E;
} emp;

int main()
{
    emp *A, B;
    A = &B;
    FILE *fp = fopen("k200288.txt", "a");
    if (fp == NULL)
    {
        printf("ERROR IN CREATING FILE \n");
        exit(1);
    }
    int i, n;
    printf("how many records you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter employee id : ");
        scanf("%d", &A->emp_id);
        fflush(stdin);
        printf("Enter employee name : ");
        gets(A->emp_name);
        fflush(stdin);
        printf("Enter employee age : ");
        scanf("%d", &A->age);
        printf("Enter employee salary : ");
        scanf("%f", &A->salary);
        fflush(stdin);
        printf("Enter employee department name : ");
        gets(A->E.dep_name);
        fflush(stdin);
        printf("Enter employee department id : ");
        scanf("%d", &A->E.dep_id);
        fwrite(A, sizeof(B), 1, fp);
    }
    fclose(fp);
    age();
    sal();
    replace();
    del();

    return 0;
}
void age()
{
    printf("\n\n");
    int id;
    printf("Enter id of employee, you want to know about : ");
    scanf("%d", &id);
    FILE *fp;
    fp = fopen("k200288.txt", "r");
    emp *A, B;
    A = &B;
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        if (id == A->emp_id && A->age > 30)
        {
            printf("%-10s %3d %3d %3.2f\n", A->emp_name, A->age, A->emp_id, A->salary);
        }
    }
    fclose(fp);
}
void sal()
{
    printf("\n\n");
    char dep1[30], dep2[30];
    printf("enter 1st dep name : ");
    fflush(stdin);
    gets(dep1);
    printf("enter 2nd dep name : ");
    fflush(stdin);
    gets(dep2);
    float high = 0;
    FILE *fp;
    fp = fopen("k200288.txt", "r");
    emp *A, B;
    A = &B;
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        if (strcmp(dep1, A->E.dep_name) == 0)
        {
            high += A->salary;
        }
    }
    rewind(fp);
    printf("employee working in department %s whose average salary is greater than the maximum salary of department %s are listed below:\n", dep1, dep2);
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        if (A->salary > high && (strcpy(A->E.dep_name, dep2) == 0))
            printf("%-10s %3d %3d %3.2f\n", A->emp_name, A->age, A->emp_id, A->salary);
    }
    fclose(fp);
}
void replace()
{
    printf("\n\n");
    FILE *fp, *f;
    emp *A, B;
    A = &B;
    fp = fopen("k200288.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    char name[30];
    int i;
    f = fopen("EXTRA.txt", "w");
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        for (i = 0; i < strlen(A->emp_name); i++)
        {
            if (A->emp_name[i] == ' ')
                name[i] = '-';
            else
                name[i] = A->emp_name[i];
        }
        name[i] = '\0';
        strcpy(A->emp_name, name);
        fwrite(A, sizeof(B), 1, f);
    }
    fclose(fp);
    fclose(f);
    remove("k200288.txt");
    rename("EXTRA.txt", "k200288.txt");
    fp = fopen("k200288.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        printf("%-10s %3d %3d %3.2f\n", A->emp_name, A->age, A->emp_id, A->salary);
    }
    fclose(fp);
    fclose(f);
}
void del()
{
    printf("\n\n");
    FILE *fp, *f;
    emp *A, B;
    A = &B;
    fp = fopen("k200288.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    int id;
    int i;
    printf("enter the id you want to delete : ");
    scanf("%d", &id);
    f = fopen("EXTRA.txt", "w");
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        if (id == A->emp_id)
            ;
        else
            fwrite(A, sizeof(B), 1, f);
    }
    fclose(fp);
    fclose(f);
    remove("k200288.txt");
    rename("EXTRA.txt", "k200288.txt");
    fp = fopen("k200288.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR IN  READING FILE \n");
        exit(1);
    }
    while (fread(A, sizeof(B), 1, fp) > 0)
    {
        printf("%-10s %3d %3d %3.2f\n", A->emp_name, A->age, A->emp_id, A->salary);
    }
    fclose(fp);
    fclose(f);
}