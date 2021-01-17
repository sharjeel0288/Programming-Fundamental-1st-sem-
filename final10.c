#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("\t\t\t\tpie in the sky bakers\n\t\t\t   \t\twelcome\n");
    int n, quan1, quan2;
    printf("how many types of items you want to order : ");
    scanf("%d", &n);

    char choose1, choose2;
    float total = 0;
    if (n == 2)
    {
    a:
        printf("Press b for biscuits(Rs 400) Press c for cake (500) : ");
        fflush(stdin);
        scanf("%c", &choose1);
        switch ((choose1))
        {
        case 'c':
            printf("enter the quantity : ");
            scanf("%d", &quan1);
            break;
        case 'b':
            printf("enter the quantity : ");
            scanf("%d", &quan1);
            break;
        default:
            printf("wrong input please select again \n");
            goto a;
            break;
        }
    b:
        printf("Press b for biscuits(Rs 400) Press c for cake (500) : ");
        scanf("%c", &choose2);
        switch ((choose2))
        {
        case 'c':
            printf("enter the quantity : ");
            scanf("%d", &quan2);
            break;
        case 'b':
            printf("enter the quantity : ");
            scanf("%d", &quan2);
            break;
        default:
            printf("wrong input please select again  \n");
            goto b;
            break;
        }
        if (choose1 == 'c')
        {
            printf("you have ordered %d cakes of worth RS %d ", quan1, quan1 * 500);
            total += quan1 * 500;
        }
        if (choose2 == 'c')
        {
            printf("you have ordered %d cakes of worth RS %d ", quan2, quan2 * 500);
            total += quan2 * 500;
        }

        if (choose1 == 'b')
        {
            printf("you have ordered %d biscuits of worth RS %d ", quan1, quan1 * 400);
            total += quan1 * 400;
        }
        if (choose2 == 'b')
        {
            printf("you have ordered %d biscuits of worth RS %d ", quan2, quan2 * 400);
            total += quan2 * 400;
        }
        printf("your total bill is : %f", total);
    }
    if (n == 1)
    {
    c:
        printf("Press b for biscuits(Rs 400) Press c for cake (500) : ");
        fflush(stdin);
        scanf("%c", &choose1);
        switch ((choose1))
        {
        case 'c':
            printf("enter the quantity : ");
            scanf("%d", &quan1);
            break;
        case 'b':
            printf("enter the quantity : ");
            scanf("%d", &quan1);
            break;
        default:
            printf("wrong input please select again \n");
            goto c;
            break;
        }

        if (choose1 == 'c')
        {
            printf("you have ordered %d cakes of worth RS %d ", quan1, quan1 * 500);
            total += quan1 * 500;
        }

        if (choose1 == 'b')
        {
            printf("you have ordered %d biscuits of worth RS %d ", quan1, quan1 * 400);
            total += quan1 * 400;
        }

        printf("your total bill is : %f", total);
    }
    return 0;
}