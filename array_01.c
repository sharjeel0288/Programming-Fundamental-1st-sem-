#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()


{

int  i ,x,y;
printf("enter the array size\n");//length of array
scanf("%d",&y);
int randarray[y];
for(i=0;i<y;i++)//for creating random values in array
{
    randarray[i]=rand()%10;
}
for(i=0;i<y;i++)//printing array
{
    printf(" %d ",randarray[i]);
}
printf("\nenter the number\n");//no of which you want to know a position 
scanf("%d",&x);


for(i=0;i<10;i++){

if(x==randarray[i])//compairing no in array
{

break;
}
}
printf("positions is %d ",i);



}
