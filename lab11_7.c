#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int A;
char B;
float C;
void *ptr;
ptr=&A;
printf("ENTER INTEGER : ");
scanf("%d",(int*)ptr);
ptr=&B;
fflush(stdin);
printf("ENTER CHAR : ");
scanf("%c",(char*)ptr);
ptr=&C;
printf("ENTER FLOAT : ");
scanf("%f",(float*)ptr);

printf("\n\nINT : %d ,  ADDRESS : %x\nCHAR : %c ,  ADDRESS : %x\nFLOAT : %f ,  ADDRESS : %x\n",A,&A,B,&B,C,&C);
return 0;
}