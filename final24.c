#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[35];
    float price;
} items;
void calculateItemPrice(items *p,int n);
void  summary(items *p, items *c,int n);
int main()
{
    int n=1;
    items A[6] = {"Plain-Ramen", 1.50, "Ichiraku-special", 2, "Egg-Topping", 1, "Chiken-Curry", 3.5, "Tea", 0.50, "Coffee", 0.50};
    items B[n];
    printf("Please select form the following menu : press\n");
    int i,loop=0,select;
    again:
    for(i=0;i<6;i++)
    {
        printf("\npress %d for %s price(%f)\n",i,A[i].name,A[i].price);
    }
    scanf("%d",&select);
    B[loop].price=A[select].price;
    strcpy(B[loop++].name,A[select].name);
    printf("press M to buy more : ");
    if(getch()=='M')
    {
        n++;
        goto again;
    }
calculateItemPrice(B, n);
printf("\npress A to view summary : ");
if(getch()=='A')
{
     summary(B,A,n);
}
return 0;
}
void calculateItemPrice(items *p,int n)
{
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=p[i].price;
    }
    printf("\nYOUR TOTAL BILL IS %f ",sum);
}
void  summary(items *p, items *c,int n)
{
    int i,j,quan=0;
    printf("\nQuantity  Item \t\t Price\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(c[i].name,p[j].name)==0)
            {
                quan++;
            }
        }
        printf("%-5d    %-20s %3.2f\n",quan,c[i].name,c[i].price);
        quan=0;
    }
}