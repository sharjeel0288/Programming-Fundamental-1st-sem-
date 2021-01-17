#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void xy(int x,int y)
{
    if(x>0 && y>0)
    {
        printf("first quadrant\n");
    }
    if(x<0 && y>0)
    {
        printf("second quadrant\n");
    }
    if(x<0 && y<0)
    {
        printf("third quadrant\n");
    }
    if(x>0 && y<0)
    {
        printf("fourth quadrant\n");
    }
    if(x==0 || y==0)
    {
        printf("on x plane or y plane");
    }
}
int main()
{int a,b;
printf("enter the values of x and y axis\n");
scanf("%d%d",&a,&b);
xy(a,b);

return 0;
}