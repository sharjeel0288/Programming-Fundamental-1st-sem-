#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int r , c , i, j, count; 
	printf("enter the no  of districts : ");
	scanf("%d",&r);
	printf("enter the no  of bracnches per district : ");
	scanf("%d",&c);
	

	int *arr[r];
	for (i=0; i<r; i++)
    {
		arr[i] = (int *)malloc(c * sizeof(int)); 
    }
	// Note that arr[i][j] is same as *(*(arr+i)+j) 
int low=1000,high=0,sum=0,dlow=0,dhigh=0,tcus[r],tcap[r][c];
	for (i = 0; i < r; i++) 
	{
		for (j = 0; j < c; j++) 
		{
			printf("\nenter the total no of customers of district %d , branch %d : ",1+i,1+j);
			a: scanf("%d",&arr[i][j]) ; // Or *(*(arr+i)+j) = ++count 
			 fflush(stdin);
			if((j==0 && arr[i][j]<301) || (j==1 && arr[i][j]<=501) || (j==2 && arr[i][j]<201));
			else
			{
				printf("please enter the right capacity : ");
				goto a;
			}
			
			sum+=arr[i][j];
		}
		tcus[i]=sum;
		 if(low>sum)
		{	low=sum;
			dlow=i+1;}
		if(high<sum)
		{high=sum;
		 dhigh=i+1;}
		
		sum=0;
	}
	printf("\n\n\n");
	float temp=0,highcap=0,lowcap=arr[0][0];
	int lowcapno=0,highcapno=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==0)
			{temp=(float)arr[i][j]/(300);
			if(highcap<temp)
			{
				highcap=temp;
				highcapno=j+1;
			}
			 else if(lowcap>temp)
			{
				lowcap=temp;
				lowcapno=1+j;
			}
			}
			else if(j==1)
			{
				temp=(float)arr[i][j]/(500);
				if(highcap<temp)
			{
				highcap=temp;
				highcapno=j+1;
			}
			 else if(lowcap>temp)
			{
				lowcap=temp;
				lowcapno=1+j;
			}
			}
			else if(j==2)
			{
				temp=(float)arr[i][j]/(200);
				if(highcap<temp)
			{
				highcap=temp;
				highcapno=j+1;
			}
			else if(lowcap>temp)
			{
				lowcap=temp;
				lowcapno=1+j;
			}
			}

		}
		printf("distict %d 's highest capacity is of branch %d which is  %4.3f\n",i+1,highcapno,highcap*100);
		printf("distict %d 's least capacity is of branch %d which is  %4.3f\n\n",i+1,lowcapno,lowcap*100);
		temp=0;highcap=0;highcapno=0;lowcap=1000;lowcapno=0;
	}
	

printf("The district getting the most profit is %d which is %d\n",dhigh,high);
printf("The district getting the least profit is %d which is %d\n",dlow,low);
printf("DISTRICT  TOTAL CUSTOMERS\n");
for(i=0;i<r;i++)
printf("%-5d         %-8d\n",i+1,tcus[i]);

	/* Code for further processing and free the 
	dynamically allocated memory */

return 0;
}
