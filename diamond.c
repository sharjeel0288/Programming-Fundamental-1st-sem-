#include<stdio.h>
#include<conio.h>
int main()
{
int totalRows,i,j ,count ,k ; //total rows input from user    i=rows  j=columns  count=for printing numbers  k=for printing lower pyramid
printf("enter total rows\n");
scanf("%d",&totalRows);
k=totalRows/2;  //used for lower pyramid

for(i=0 ; i<totalRows ; i++)//execute  totalrows times
{  count=1;
 if(i<(totalRows/2)) //for upper pyramid
   { 
    for(j=0 ; j<2*totalRows ; j++)//for columns 
    {
        if((j>=totalRows-1-i) && (j<=totalRows-1+i))//range of printing numbers
        { 
        printf("%d",count);
        count++;
        }
        else// if not in range than print space
        {
            printf(" ");
        }
    }
   } 

       else
       {k--; //for lower pyramid    k-- decrement in range of count(printing no) in a row
           for(j=0 ; j<2*totalRows ; j++) //for columns
           
           {
               if(j>=totalRows-1-k && j<=totalRows-1+k)  //range of lower pyramid
                {
                    printf("%d",count);
                     count++;
                     
                }
                else
                {
                    printf(" ");//space if not in above  range 
                }
                
           }
           
       }
       printf("\n");
}
    return 0;
}