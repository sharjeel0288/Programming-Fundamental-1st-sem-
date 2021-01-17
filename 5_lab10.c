/*By using Pointer to Structures, increment +3 in Test 1, +10 in Test 2 and +8 in
Test 3 and then display the name; roll number and total sessional marks (After
increment) of both the students.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int roll_no;
    float t1,t2,t3,a_mark;
}student;
int main()
{
  student s1={"sharjeel",288,25,26,27,30},s2={"kariz",333,29,21,28,16},*p1,*p2;
  p1=&s1; p2=&s2;
  p1->t1=s1.t1+3;    p1->t2=s1.t2+10;      p1->t3=s1.t3+8;
  p2->t1=s2.t1+3;    p2->t2=s2.t2+10;      p2->t3=s2.t3+8;
  printf("\nNAME : %s\nROLL NO# : %d\nTEST 1 MARKS : %f\nTEST 2 MARKS : %f\nTEST 3 MARKS : %f\n",s1.name,s1.roll_no,s1.t1,s1.t2,s1.t3);
  printf("\nNAME : %s\nROLL NO# : %d\nTEST 1 MARKS : %f\nTEST 2 MARKS : %f\nTEST 3 MARKS : %f\n",s2.name,s2.roll_no,s2.t1,s2.t2,s2.t3);
return 0;
}