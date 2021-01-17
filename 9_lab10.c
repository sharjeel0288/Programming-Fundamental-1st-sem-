/* Write a structure to store the roll no., name, age (between 11 to 14) and address
of students (more than 10). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll
no.
3 - Write another function to display the details of the student whose roll no is
given (i.e. roll no. Entered by the user). */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct US
{
    int roll_no,age;
    char name[20],add[35];
}US;
void age14(US *ptr,int num);
void even_roll(US *ptr,int num);

void detail(US *ptr,int num);
int main()
{
    int n=10;
    US A[n];
    for (int i=0 ; i < n ; i++)
    {
        printf("\n***ENTER THE RECORD OF STUDENT NO# %d\n",1+i);
        printf("enter the name : ");
        gets(A[i].name);
        fflush(stdin);
        printf("enter the address : ");
        gets(A[i].add);
        fflush(stdin);
        printf("enter the age b/w 11-14: ");
        a:
        scanf("%d",&A[i].age);
        fflush(stdin);
        if(A[i].age>=11 && A[i].age<=14);
		else
		  {
		    printf("Age must be b/w 11-14\n");
		    goto a;
		  }
        printf("enter the roll no : ");
        scanf("%d",&A[i].roll_no);
        fflush(stdin);
        printf("\n");        
        
    }

    age14(&A[0],n);
    even_roll(&A[0],n);
    detail(&A[0],n);

return 0;
}
void age14(US *ptr,int num)
{
    printf("\nNAME OF THOSE STUDENT WHOSE AGE ARE 14 YEARS\n");
    for(int i=0 ; i<num ; i++)
    {
        if( ptr[i].age==14)
        {
            puts(ptr[i].name);
        }
    }
}
void even_roll(US *ptr,int num)
{
    printf("\nNAME OF THOSE STUDENT WHOSE ROLL NO# IS EVEN\n");
    for(int i=0 ; i<num ; i++)
    {
        if( ptr[i].roll_no%2==0)
        {
            puts(ptr[i].name);
        }
    }
}
void detail(US *ptr,int num)
{
    printf("\nEnter the roll no fo student whose information you want to know : ");
    int r_no;
    scanf("%d",&r_no);
    fflush(stdin);
    for(int i=0 ; i<num ; i++)
    {
        if( ptr[i].roll_no==r_no)
        {
          printf("NAME : %s\nADDRESS : %s\nROLL NO : %d\nAGE : %d\n",ptr[i].name,ptr[i].add,ptr[i].roll_no,ptr[i].age);
        }
    }
}
