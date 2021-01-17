#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void jig(char boy[])
{int i;
    for(i=0;i<strlen(boy);i++)
    {
        if (i==0)
        {
            boy[i]=boy[i]-32;
        }
        else if(boy[i]==' ')
        {--i;
            if(boy[i]>='a' || boy[i]>='z')
            {
                boy[i]=boy[i]-32;
                i+=2;
                boy[i]=boy[i]-32;
            }
        }
        else
        {
            if(i==strlen(boy)-2)
            {
                boy[i]=boy[i]-32;
            }
        }
        

    }
    for(i=0;i<strlen(boy)-1;i++)
    {
        printf("%c",boy[i]);
    }
}
int main()
{
char string[100];
printf("enter a string boy\n");
fgets(string,sizeof(string),stdin);
int x;
jig(string);
return 0;
}