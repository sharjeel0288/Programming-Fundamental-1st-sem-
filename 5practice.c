#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "colorprintf.h"
 struct ola
{
        int id;
        char name[20];
};
int main()
{
    FILE *shop;
    struct ola a;
    char ch;
    int n=1;
   //printf("enter the number of entries\n");
   // scanf("%d",&n);
   // fflush(stdin);
    shop=fopen("D:\\shop.txt","r+");
    if(shop==NULL)
    {
        printf("error");
        exit(1);
    }
    ch=fgetc(shop);
   while(!feof(shop))
  {
   printf("%c",ch);
   ch=fgetc(shop);
  }
 fclose(shop);
  
 /*   for (int i=0;i<n;i++)
    {
        printf("\n");
        printf("enter id\n");
        scanf("%d",&(a+i)->id);
        fflush(stdin);
        printf("enter name\n");
        gets((a+i)->name);
        fflush(stdin);
        fwrite((a),sizeof(*(a)),1,f);

    }*/
    //fwrite((a),sizeof(*(a)),,f);
    //fclose(f);
return 0;
}