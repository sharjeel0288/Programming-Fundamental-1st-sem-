#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void bubblesort(int *index, int c[], int n);
void replace(int *x, int *y);
void display(char name[][20], int c[], int n,int *index);
int main()
{
    char name[][20] = {"Hina", "Sara", "Ali", "Zain", "Bakhtawar", "Hashim", "Zeeshan", "Jameela", "Asfa", "Zahid"};
    int covid[] = {1, 1, 0, 0, 1, 0, 0, 1, 1, 0};
    FILE *p=fopen(__FILE__,"r");
    int c;
    do
    {
       c = getc(p);
        putchar(c);
    } while (c!=EOF);
    
    int n = sizeof(covid) / sizeof(covid[0]);
    int index[n];// index[10]={0,1,2,3,4,5,6,7,8,9}
    for(int i=0 ; i< n ;i++)
    index[i]=i;
    void (*bs)(int *, int *c, int n) = bubblesort;
    void (*cout)(char name[][20], int *c, int n,int *index) = display;
    printf("COVID-19 test report Before sorting \n\n");
    cout(name, covid, n,&index[0]);
    printf("\n\nCOVID-19 test report After sort\n\n");
    bs(&index[0], covid, n);
    cout(name, covid, n , &index[0]);
    fclose(p);
    return 0;

// void (*p)()=bs;
    //p()
}
void display(char name[][20], int c[], int n,int *index)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-15s  ", name[index[i]]);
        if (c[i] == 1)
            printf("Positive\n");
        else

            printf("Negative\n");
    }
}
void bubblesort(int *index, int c[], int n)
{
     void (*rp)(int *x,int *y)=replace;
   
    int i, j;
    int  temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {// {1, 1, 0, 0, 1, 0, 0, 1, 1, 0};
        //{0,1,2,3,4,5,6,7,8,9}
        //11111  
        //01478 23569
            if (c[j] < c[j + 1])
            {
                rp(&c[j], &c[j + 1]);
                temp=index[j];   
                index[j]=index[j+1];
                index[j+1]=temp; 
            }
            
        }
    }
}
void replace(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}