#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
typedef struct order
{
   int order_no;
   int ship_day,p_id;
   float total_price;
   char c_address[35],mobile_no[11],product[25];
   time_t time;
}order;

int main()
{
FILE *outlet;
    //order show;
    order A;
    outlet=fopen("outlet.txt","r");
    if(outlet==NULL)
    {
        printf("could not load \nerror");
        exit(1);
    }//printf("  PRICE\t\tPRODUCT\t\tPRODUCT_ID\tORDER_NO    SHIP_DAY\t\tMOBILE_NO\t\t\tADDRESS\t\t\t\tDATE\n\n");
    printf("PRODUCT  PRODUCT_ID\tSHIP_DAY\t\tMOBILE NUMBER\t\t     DATE\n\n");
    while(fread(&A,sizeof(order),1,outlet)>0)
    {
       
        {
            printf("%s\t  %d\t   in %d after order placed\t%s\t\t%s",A.product,A.p_id,A.ship_day,A.mobile_no,ctime(&A.time) );
            //printf("%f\t%s\t\t  %d\t\t%d\t\t%d\t\t%s\t  %s    %s",show.total_price,show.product,show.p_id,show.order_no,show.ship_day,show.mobile_no,show.c_address,ctime(&show.time));
        }
    }
    fclose(outlet);
    
return 0;
}