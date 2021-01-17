#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void jeetkibazi(int **p,int n,int* p1,int *p2);
int main()
{
int  *p[2];
srand(time(0)) ;
int n=(rand()%10)+3,i;
if(n%2!=0)// int p[2][10]
/*
1   2    3    4    5  
25  26  98   14    65
*/
/*int n[2][10]={{1,2,3,4,5,6,7,8,9,10},
                {25,98,14}};*/
n+=1;
for(i=0;i<2;i++)
p[i]=(int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
p[0][i]=i+1;

for(i=0;i<n;i++)
p[1][i]=rand()%100;
int player1=0,player2=0;
jeetkibazi(p,n,&player1,&player2);
(player1>player2)? printf("Congratulations player 1 on your well-deserved success ") :  printf("Congratulations player 2 on your well-deserved success ");
getch();
return 0;
}
void jeetkibazi(int **p,int n,int* p1,int *p2)
{
    system("color 47");
    int i,select,count=0;
    printf("Select any one box \n");
    for(i=0;i<n;i++)
    printf("  %d  ",p[0][i]);

    while(count<(n/2))
    {
        printf("\nPlayer 1 turns : ");
        back1:
        scanf("%d",&select);
        for(i=0;i<n;i++)
        {//123456789 10
            if(select!=0 && select==p[0][i])
            goto next1;

            else if(i==n-1 && (select==0 || select!=p[0][i]))
            {
                printf("You have enter the wrong box !!!! \n please select again : ");
                goto back1;
            }
        }
        next1:
        printf("\n%d Cash is found on box %d ",p[1][select-1],select);
        *p1+=p[1][select-1];
        p[0][select-1]=0;

printf("\n\nThe remainig boxes are \n");
        for(i=0;i<n;i++)
        {
    //023456        10
             if(p[0][i]!=0)
            printf("  %d  ",p[0][i]);

        }
         printf("\nPlayer 2 turns : ");
        back2:
        scanf("%d",&select);
        for(i=0;i<n;i++)
        {
            if(select!=0 && select==p[0][i])
            goto next2;

            else if(i==n-1 && (select==0 || select!=p[0][i]))
            {
                printf("You have enter the wrong box !!!! \n please select again : ");
                goto back2;
            }
        }
        next2:
        printf("\n%d Cash is found on box %d ",p[1][select-1],select);
        *p2+=p[1][select-1];
        p[0][select-1]=0;
        printf("\n\nThe remainig boxes are \n");
        for(i=0;i<n;i++)
        {
            
             if(p[0][i]!=0)
            printf("  %d  ",p[0][i]);

        }
        count++;
    }
    printf("\n\nTOTAL SCORES player1 = %d , player2 = %d\n\n",*p1,*p2);
}