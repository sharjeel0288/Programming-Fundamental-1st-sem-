#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *ptr;
printf("ENTER A STRING : ");
ptr=(char*)calloc(65,sizeof(ptr));
gets(ptr);
puts(ptr);
return 0;
}
