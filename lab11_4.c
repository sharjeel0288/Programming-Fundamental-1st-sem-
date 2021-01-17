#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int num,high=0,high2=0 ;
float sum=0 ;
printf("enter the no# of marks you want to enter : ");
scanf("%d",&num) ;
int *ptr;
ptr=(int*)malloc(num*sizeof(ptr));

for(int i=0 ; i<num ; i++)
{
    printf("-> ");
    //fflush(stdin);
    scanf("%d\n",&ptr[i]) ;
}

for(int i=0; i< num ;i++)
{
    sum+= ptr[i];

    if(high < ptr[i])
    high=ptr[i] ;
    
    else if(high2< ptr[i] && high2!=high)
    high2 = ptr[i] ;

}

printf("\n***highest : %d ***\n***Second highest : %d ***\n***Average : %f ***",high,high2,sum/num) ;
return 0 ;
}