#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
void *ptr;
ptr=(void*)malloc(sizeof(ptr));
printf("enter valvue : ");
scanf("%f",ptr);
printf("\n%c",*(int*)ptr);
printf("  %f  ",*(float*)ptr);
printf("  %c  ",*(char*)ptr);

return 0;
}