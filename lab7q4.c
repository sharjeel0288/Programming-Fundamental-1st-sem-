#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void anagram(char string1[],char string2[])
{  
    int count=0,temp,limit=strlen(string1);
    for(int i=0;i<limit;i++)
    {
        for(int j = 0 ; j < limit ; j++)
        {
            if(string2[i]==string1[j])
            {
                count++;
                break;
            }
        }
    }
        if(count==limit)
        {
            printf("anagram\n");
        }
        else
        printf("not an anagram");
}
int main(){
    char a[100],b[100];
    printf("enter the first string\n");
    gets(a);
    printf("enter the second string\n");
    gets(b);
    anagram(a,b);
   

return 0;
}