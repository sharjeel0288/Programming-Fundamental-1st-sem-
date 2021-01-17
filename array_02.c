#include <stdio.h>
#include <stdlib.h>

int main()
{
char string[100],c;
int i,y=0;
printf("enter a string\n");
gets(string);
printf("enter a alphabet : ");
scanf("%c",&c);
for (int i = 0; string[i] != '\0'; ++i)//for comairing every alphabet i a string with the entered alphabet of frequency
{
if(c==string[i])//if its found in array then y++
{
y++;
}
}
printf("the frequency of %c is  %d  ",c,y);
}