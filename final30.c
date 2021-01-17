#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void mergesort(int *A,int n);
void merge(int *A,int *r,int rightsize,int *l,int leftsize);
int main()
{
int A[]={9,12,5,6,1,2,5,1,5,1,4,5,6,10,10,1,2,546};
int n=sizeof(A)/sizeof(A[0]);
mergesort(A,n);
for(int i=0;i<n;i++)
printf("%d  ",A[i]);

return 0;
}
void mergesort(int *A,int n)
{
    if(n<2)
    return;
    int mid=n/2;
    int *r,*l;
    l=(int*)malloc(mid*sizeof(int));
    r=(int*)malloc((n-mid)*sizeof(int));
    for(int i=0;i<mid;i++) l[i]=A[i];
    for(int i=mid;i<n;i++) r[i-mid]=A[i];
    mergesort(l,mid);
    mergesort(r,n-mid);
    merge(A,r,n-mid,l,mid);
    free(r);
    free(l);
}
void merge(int *A,int *r,int rightsize,int *l,int leftsize)
{
    int rs=0,ls=0,k=0;
    while(ls<leftsize && rs<rightsize)
    {
        if(r[rs]>l[ls])
        {
            A[k++]=r[rs++];
        }
        else
        {
            A[k++]=l[ls++];
        }
        
    }
    while(ls<leftsize)
    {
        A[k++]=l[ls++];
    }
    while (rs<rightsize)
    {
        A[k++]=r[rs++];
    }
    
}