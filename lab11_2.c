#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int *intptr; float *floatptr ; char *charptr;
intptr=(int*)calloc(1,sizeof(intptr));
floatptr=(float*)calloc(1,sizeof(floatptr));
charptr=(char*)calloc(1,sizeof(charptr));





free(intptr);
free(charptr);
free(floatptr);
return 0;
}