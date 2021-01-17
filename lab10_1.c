#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct movietype
{
   char movie_name[25],director[20],producer[20];
   int year,copy;
}movietype;
int main()
{
    movietype *p;
    printf("enter the number of records you want to enter \n");
    int n;
    scanf("%d",&n);
    fflush(stdin);
    p=(movietype*)calloc(n,sizeof(p));
    for (int i=0;i<n;i++)
    {
        printf("enter the movie name : ");
        fgets((p+i)->movie_name,sizeof((p+i)->movie_name),stdin);
        fflush(stdin);
        printf("\nenter the name of director : ");
        fgets((p+i)->director,sizeof((p+i)->director),stdin);
        fflush(stdin);
        printf("\nenter the name of producer : ");
        fgets((p+i)->producer,sizeof((p+i)->producer),stdin);
        fflush(stdin);
        printf("\nenter the year of release : ");
        scanf("%d",&(p+i)->year);
        fflush(stdin);
        printf("\nenter the number of remaining copies : ");
        scanf("%d",&(p+i)->copy);
        fflush(stdin);
        printf("\n");
    }
     for (int i=0;i<n;i++)
    {
        printf("movie name is " );
        puts((p+i)->movie_name);
        printf("director name is ");
        puts((p+i)->director);
        printf("producer name is");
        puts((p+i)->producer);
        printf("\nrelease year %d",(p+i)->year);
        printf("\nremaining copies %d",(p+i)->copy);
        
    }
return 0;
}