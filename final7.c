#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct address
{
    char add[30],city[30],state[30];
}add;
typedef struct customer
{
    int id;
    char name[30];
    add loc;
}cus;
typedef struct product
{
    int id,quan;
    char name[30];
}pro;
int main()
{
FILE *fp;
if((fp=fopen("customer_details.txt","a"))==NULL)
{
    printf("error in creating ");
    exit(1);
}
cus A;
int i,n;
print("how many records you want to enter : ");
scanf("%d",&n);
for(int i=0;i<n;i++)
    {
        printf("enter the id of customer : ");
        scanf("%d",&A.id);
        fflush(stdin);
        printf("enter the customer name : ");
        gets(A.name);
        fflush(stdin);
        printf("enter street address of customer : ");
        gets(A.loc.add);
        fflush(stdin);
        printf("enter city : ");
        gets(A.loc.city);
        fflush(stdin);
        printf("enter state : ");
        gets(A.loc.state);
        fflush(stdin);
        fwrite(&A,sizeof(A),1,fp);
    }
    fclose(fp);
    FILE *pf;
    if((fp=fopen("Product_details.txt","a")))
    char c;
    printf("enter ctrl+Z to break the cycle of input : ");
    scanf("%c",&c);
    pro B;
    while(c!='^Z')
    {
        printf("ENTER PRODUCT ID : ");
        scanf("%d",&B.id);
        fflush(stdin);
        printf("ENTER PRODUCT NAME : ");
        gets(B.name);
        fflush(stdin);
        printf("ENTER PRODUCT QUANTITY : ");
        scanf("%d",&B.quan);
        fwrite(&B,sizeof(B),1,)
    }


return 0;
}