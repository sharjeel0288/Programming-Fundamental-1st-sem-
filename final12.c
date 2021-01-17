#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*The worker has to maintain the record of ‘n’ customers in (customer_details.txt) file.
b) Customer details include: a customer ID (type int), a customer Name (type string), Customer
address (consisting of street address, city, state). Hint: Structure nesting is required in address
field. [ The user has to input all the data].*/

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
    int n;
    cus A;
    FILE *fp;
    fp=fopen("customer_details.txt","a");
    printf("enter the no of customer's record you want to enter : ");
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
    /*The worker has to maintain the ID of Product, Name of Product, Quantity of Product in
(Product_details.txt) file. He should take the input from the user until the user enters ‘EOF’.
Further, the worker should have menu to select any option out of the given three below:
i) list out all the maintained items.
ii) list only those items whose quantity is zero.
iii) list only those items whose quantity is greater than fifty*/
FILE *fpp;
fpp=fopen("Product_details.txt","a");
char ef[5];
pro B;
while(strcmp(ef,"EOF")!=0)
{
   fflush(stdin);
    printf("enter product id : ");
    scanf("%d",B.id);
    fflush(stdin);
    printf("enter product name : ");
    gets(B.name);
    fflush(stdin);
    printf("enter product quantitiy : ");
    scanf("%d",&B.quan);
    fflush(stdin);
    fwrite(&B,sizeof(B),1,fpp);
    printf("enter EOF  to close the file and data entering : ");
    gets(ef);
    fflush(stdin);
} 
fclose(fpp);
FILE *f=fopen("Product_details.txt","r") ;
int num;
pro c;
printf("1 for list out all the maintained items\n2 for list only those items whose quantity is zero.\n3 for list only those items whose quantity is greater than fifty\n");
scanf("%d",&num);

    
    switch (num)
{
case 1:
    while(fread(&c,sizeof(c),1,f)>0)
    printf("%8d   %-20s  %-8d\n",c.id,c.name,c.quan);
    break;
case 2:
    while(fread(&c,sizeof(c),1,f)>0)
{
    if(B.quan==0)
    printf("%-20s  %8d   %-8d",c.name,c.id,c.quan);
    
}
break;
case 3:
while(fread(&c,sizeof(c),1,f)>0)
{
    if(B.quan>=0)
    printf("%-20s  %8d   %-8d",c.name,c.id,c.quan);
    
}
break;
default:
    break;
}
fclose(f);
return 0;
}