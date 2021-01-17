/*Question no 8:
Write a C program in which function find the eligibility of admission for a professional
course based on the following criteria:
Marks in Maths
>=65 Marks in Phy
>=55 Marks in
Chem>=50
Total in all three subject
>=180 or
Total in Math and Physics >=140*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void eligiblity(int math, int phy, int chem)
{
    int total = math + phy + chem;
    if (total >= 180 && (math + chem) >= 140 && math >= 65 && phy >= 55 && chem >= 50)
    {

        printf("eligible of admission for a professional course");
    }
    else
    {
        printf("not eligible of admission for a professional course");
    }
}
int main()
{
    int MarkMath, MarkPhy, MarkChem;
    printf("enter the marks of maths , phyics , chemistry \n");
    scanf("%d%d%d", &MarkMath, &MarkPhy, &MarkChem);
    eligiblity(MarkMath, MarkPhy, MarkChem);

    return 0;
}