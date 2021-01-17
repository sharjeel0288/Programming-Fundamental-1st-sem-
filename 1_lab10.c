#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Write a program in C that creates structure STUDENT. The STUDENT structure
contains the following members: Name, Roll number, Attendance Marks, Test1
marks, Test2 marks and Test3 marks. Initialize two variables to store the record
of two students. The program should display the name; roll number and total
sessional marks of both the students.*/
typedef struct student
{
    char name[20];
    int roll_no;
    float t1,t2,t3,a_mark;
}student;
int main()
{
 student s[2];
 float T[2]={0,0};
 for(int i=0;i<2;i++)
 {
     printf("\n***enter the record for %d  student***\n\n",i+1);
     printf("enter name : ");
     fgets(s[i].name,sizeof(s[i].name),stdin);
     fflush(stdin);
     printf("enter the roll no : ");
     scanf("%d",&s[i].roll_no);
     fflush(stdin);
     printf("enter the attendance marks : ");
     scanf("%f",&s[i].a_mark);
     fflush(stdin);
     printf("enter the test 1 marks : ");
     scanf("%f",&s[i].t1);
     fflush(stdin);
     printf("enter the test 2 marks : ");
     scanf("%f",&s[i].t2);
     fflush(stdin);
     printf("enter the test 3 marks : ");
     scanf("%f",&s[i].t3);
     fflush(stdin);
     T[i]=s[i].t1+s[i].t2+s[i].t3;
 }
 system("cls");
 for(int i=0;i<2;i++)
 {

    printf("\n*****RECORD OF STUDENT %d ****\n\n",i+1);
    printf("NAME : %s",s[i].name);
    printf("ROLL NO : %2d",s[i].roll_no);
    printf("\nTOTAL SEASONAL MARKS : %.3f \n",T[i]); 
 }
return 0;
}