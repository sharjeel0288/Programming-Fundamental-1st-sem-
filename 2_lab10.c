/*Write a program in C that creates structure TIME. Initialize two variables to
store the starting and ending time of the race. The program should calculate the
elapsed time in the third TIME variable and display it.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct TIME
{
    int hrs, min, sec;
} TIME;

int main()
{
    TIME st, et, tt;
    printf("enter the start time in 24 hours format "
           " hours minutes seconds "
           " : ");
    scanf("%d%d%d", &st.hrs, &st.min, &st.sec);

    while (st.hrs >= 25)
    {
        printf("\nplz enter start time hours in 24 hours format : ");
        scanf("%d", &st.hrs);
    }
    while (st.min >= 61)
    {
        printf("\nplz enter start time minutes in correct form : ");
        scanf("%d", &st.min);
    }
    while (st.sec >= 61)
    {
        printf("\nplz enter start time seconds in correct form : ");
        scanf("%d", &st.sec);
    }

    printf("\nenter the end time in 24 hours format "
           " hours minutes seconds "
           "");
    scanf("%d%d%d", &et.hrs, &et.min, &et.sec);

    while (et.hrs >= 25)
    {
        printf("\nplz enter end time hours in 24 hours format : ");
        scanf("%d", &st.hrs);
    }
    while (et.min >= 61)
    {
        printf("\nplz enter end time minutes in correct form : ");
        scanf("%d", &st.min);
    }
    while (et.sec >= 61)
    {
        printf("\nplz enter end time seconds in correct form : ");
        scanf("%d", &st.sec);
    }
    tt.hrs = et.hrs - st.hrs;
    tt.min = et.min - st.min;
    tt.sec = et.sec - st.sec;
    printf("\n**elapsed time : %d hours : %d min : %d sec ***\n", tt.hrs, tt.min, tt.sec);
    return 0;
}