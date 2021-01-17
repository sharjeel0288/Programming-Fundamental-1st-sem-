#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("***HI!! THIS IS ZEO, HOW MAY IS HELP YOU :)****\n ");

    char color[] = "color", delivery[] = "delivery", Return[] = "return", zidello[] = "zidello";
    char input[35];
    int count_color = 0, count_delivery = 0, count_Return = 0, count_zidello = 0;
start:
    fflush(stdin);
    printf("\nwhat you want to ask? : ");
    gets(input);
    for (int i = 0; i < strlen(input); i++)
    {
         
        for (int j = 0; j < strlen(color) + i; j++)
        {
            if (color[j] == input[j + i])
            {
                count_color++;
                if (count_color == strlen(color))
                {
                    goto colors;
                    break;
                }
            }
        }
        count_color=0;
        for (int j = 0; j < strlen(delivery) + i; j++)
        {
            if (delivery[j] == input[j + i])
            {
                count_delivery++;
                if (count_delivery == strlen(delivery))
                {
                    goto deliv;
                    break;
                }
            }
        }
        count_delivery=0;
        for (int j = 0; j < strlen(Return) + i; j++)
        {
            if (Return[j] == input[j + i])
            {
                count_Return++;
                if (count_Return == strlen(Return))
                {
                    goto ret;
                    break;
                }
            }
        }
        count_Return=0;
        for (int j = 0; j < strlen(zidello) + i; j++)
        {
            if (zidello[j] == input[j + i])
            {
                count_zidello++;
                if (count_zidello == strlen(zidello))
                {
                    goto zid;
                    break;
                }
            }
        }
        count_zidello=0;
    }

    int num;

    printf("\nOH NO!,i can't understand please ask me what i can answer\n");
    fflush(stdin);
    printf("\nif you want to ask any other thing press 1 : ");
    scanf("%d", &num);
    if (num == 1)
        goto start;


colors:
    if (count_color == strlen(color))
        printf("\nWe work with RGB colors but if you want to know about any specific product color \nthen call ZIDELLO's help center xxxx-xxxxxxx\n\n");

deliv:
    if (count_delivery == strlen(delivery))
        printf("\nWe deliver in bussiness working days\nPress 1 to know about your delivery status\nPress any other key to continue\n");

ret:
    if (count_Return == strlen(Return))
        printf("\nReturn policies are as follows \nIf you had removed the seal then we will not accept\nWe will accept return after a week of product is bought\nwe will not accept return if the product is broken or somthing else\nWe wll not accept return if the the product is used\n\n\nIf you are eligible of returning a product then:\n1  Pack the product as you get it\n2   Call the ZIDELLO'S return center\n3  Tell them about the credit how you want them to return (vouchur/bank deposit)\n4  Wait for the pick-up man\n ");
zid:
    if (count_zidello == strlen(zidello))
        printf("\nHI, How are you?\nZIDELLO's is the flourishing e-shopping with the othentic sellors\nour aim is to serve as many features as we can to our customers\n");


    printf("\n****Thank you have a nice day****\n");
    
}