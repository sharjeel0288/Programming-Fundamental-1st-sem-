#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
float area(float x1, float x2, float x3, float y1, float y2, float y3)
{
    float a = 1 / (x1 * (y2 - y1) + x2 * (y3 - y2) + x3 * (y1 - 2));
    if (a < 0)
        a = (-1 * a);

    return a;
}
int point(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y)
{
    float A = area(x1, x2, x3, y1, y2, y3);
    float A1 = area(x, x2, x3, y, y2, y3);
    float A2 = area(x1, x, x3, y1, y, y3);
    float A3 = area(x1, x2, x, y1, y2, y);
    if (A == (A1 + A2 + A3))
        return 1;
    else

        return 0;
}
int main()
{
    float x1, x2, x3, y1, y2, y3, x, y;
    printf("enter point (x,y) : ");
    scanf("%f%f", &x, &y);
    printf("enter vertice A (x,y) : ");
    scanf("%f%f", &x1, &y1);
    printf("enter vertice B (x,y) : ");
    scanf("%f%f", &x2, &y2);
    printf("enter vertice C (x,y) : ");
    scanf("%f%f", &x3, &y3);
    float final_area=area(x1,x2,x3,y1,y2,y3);
    int check=point(x1,x2,x3,y1,y2,y3,x,y);
    printf("Area of triange is : %.2f\n",final_area);
    if(check==1)
    printf("point P(%.2f,%.2f) is inside",x,y);
    else
    printf("point P(%.2f,%.2f) is outside",x,y);

    return 0;
}
