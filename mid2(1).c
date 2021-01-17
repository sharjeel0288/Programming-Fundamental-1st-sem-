#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void check_winner1(int a[5][4])
{
    int i=0,j=0,temp,max=0;
    for(i=0;i<5;i++)
    {temp=a[i][j];
        for(j=0;j<4;j++)
        {
            if(temp<a[i][j])
            {
                temp=a[i][j];
                max=j+1;

            }
        }
        printf("aera %d : candidate %d\n",i+1,max);
    }
}
void check_winner2(int a[5][4])
{
    int i=0,j=0,temp,max=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            max+=a[j][i];
        }
        printf("candidate %d : total votes %d\n",i+1,max);
        max=0;
    }
}
int check_winner3(int a[5][4])
{
    int i=0,j=0,sum=0,max=0,count;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            sum+=a[i][j];
        }
    
    if(sum>max)
    {
        max=sum;
        count=i+1;
    }
    sum=0;
    }
    return count;
}

int main()
{
int a[5][4]={ {192 ,48, 206 ,37},
              {147 ,90, 312, 21},
              {186 ,12 ,121, 38},
              {114, 21 ,408 ,39},
              {267 ,13 ,382 ,29},
            };
        check_winner1(a);
        check_winner2(a);
        int x;
        x=check_winner3(a);
        printf("%d",x);
    
return 0;
}