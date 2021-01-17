/*10. Write a program that calculate Area of square, Volume of Cube, Circumference
of Circle, and Hypotenuse of a triangle using structures to function.
** Value are entered by User.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct OH
{
    float lenght,base,perp,radius;

}OH;
float area_of_cube(OH *ptr);
float  vol_of_cube(OH *ptr);
float circumf(OH *ptr);
float hypots(OH *ptr);
int main()
{
 OH yes;
 printf("enter the HEIGHT(cube), BASE, PERPENDICULAR(triangle), and RADIUS(circle)\n");
 scanf("%f%f%f%f",&yes.lenght,&yes.base,&yes.perp,&yes.radius);
 float area_s,vol_c,hyp,circum;
 area_s= area_of_cube(&yes); vol_c=vol_of_cube(&yes); circum=circumf(&yes); hyp=hypots(&yes);
 printf("area of square : %f\nvolume of cube : %f\nHypotenuse : %f\nCircumference : %f\n",area_s,vol_c,hyp,circum);
return 0;
}
float  area_of_cube(OH *ptr)
{
    return ptr->lenght*ptr->lenght;
}
float  vol_of_cube(OH *ptr)
{
    return ptr->lenght*ptr->lenght*ptr->lenght;
}
float circumf(OH *ptr)
{
    return M_PI*ptr->radius*ptr->radius;
}
float hypots(OH *ptr)
{
    return sqrt(ptr->perp*ptr->base);
}