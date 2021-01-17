#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char string[])
{
    char string2[100];
    int count = 0, temp, limit = strlen(string) - 1;
    for (int i = 0; i < strlen(string); i++) //duplicating first array into second
    {
        string2[i] = string[i];
    }
    for (int i = 0; i < limit; i++) // swaping first char with last then second with second last
    {
        temp = string[i];
        string[i] = string[limit];
        string[limit] = temp;
        limit--;
    }
    puts(string);
    for (int i = 0; i < strlen(string2); i++)
    {
        if (string[i] == string2[i])
        {
            count++; // if both arrays are same then count equals to lenght of string
        }
    }

    if (count == strlen(string))
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }
}
int main()
{
    char string[100];
    printf("enter the string\n");
    gets(string);
    reverse(string);

    return 0;
}