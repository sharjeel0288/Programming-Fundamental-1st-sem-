#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
float* ptr,area=0;
ptr=(float*)calloc(1,sizeof(ptr));
printf("enter the aprox. height of box (in cm) : ");
scanf("%f",&ptr[0]);
area=ptr[0];
printf("enter the aprox. width of box (in cm) : ");
scanf("%f",&ptr[0]);
area=area*ptr[0];
printf("enter the aprox. length of box (in cm) : ");
scanf("%f",&ptr[0]);
area=area*ptr[0];
printf("\n\naprox area required is : %f cm\n",area);

return 0;
}