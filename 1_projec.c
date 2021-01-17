#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct product_detail
{
	int p_id; char pack[10];  char address[100]; int ship;
}p_d;
void product_id(p_d **p)
{
	printf("product id is %d\nthe package type is :", (*p)->p_id);
	puts((*p)->pack);
	printf("shipment in %d days \naddress of delivery " , (*p)->ship);
	puts((*p)->address);

}
int main()
{	
	//p_d a;
	p_d *p1;
	p1=(p_d*)malloc(1*sizeof(p1));

	printf("enter the adress ");
	fgets(p1->address,sizeof(p1->address),stdin);
	printf("enter the package ");
	fgets(p1->pack,sizeof(p1->pack),stdin);
	printf("enter the id   ");
	scanf("%d",&p1->p_id);
	printf("enter the shipment ");
	scanf("%d",&p1->ship);
	
	product_id(&p1);
	free(p1);

return 0;
}

/*•	Checking of Product ID
•	Packaging
•	Cross checking of customer address
•	Shipping
*/