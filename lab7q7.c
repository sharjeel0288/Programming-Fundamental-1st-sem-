#include<stdio.h>
#include<stdlib.h>
int factors(int start,int end)
{
    int count=0;
    for(int i = start ; i<= end ; i++)
    {
        if(i%3==0)
        {
            printf(" %d ,",i);
            count++;
        }
    }
    return count;

}
int main(){
    int upper,lower,x;
    printf("Enter the upper and lower limit\n");
    scanf("%d%d",&upper,&lower);
    x=factors(lower,upper);
    printf("\nNumbers of factors of 3 in the provided limit %d",x);


return 0;
}