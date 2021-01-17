#include <stdio.h>

float *tallest(float *he1, float *he2)
{
    if(*he1 > *he2)
    {
        return he1;
    }
    else
        return he2;
}

int main()
{
    float height1 = 5.50;
    float height2 = 5.90;

    float *ptr = tallest(&height1, &height2);
    printf("%f",*ptr);

    return 0;
}