#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct dict
{
    char word[25];
}dict;
int rightleft(char *array,int n,int m,char word[25]);
int updown(char *array,int n,int m,char word[25]);
int dia(char *array,int n,int m,char word[25]);
int main()
{
int m,n,i,j,k=0,f=0;
printf("enter the row  : ");
scanf("%d",&n);
fflush(stdin);
printf("enter the columns : ");
scanf("%d",&m);
fflush(stdin);
char boggle[n][m];
printf("\n\nENTER THE LETTERS\n");
for(int i=0;i<n;i++)
{
    for (j=0;j<m;j++)
    {
       fflush(stdin);
        printf("ENTER ALPHABET ON INDEX (%d,%d) : ",1+i,1+j);
        scanf("%c",&boggle[i][j]);
    }
}
printf("\n\n");
for(int i=0;i<n;i++)
{printf("|");
//for(int k=0;k<m;k++)
//printf("___|");
//printf("\n");
    for (j=0;j<m;j++)
    {
        printf("  %c  ",boggle[i][j]);
    }
    
    
    printf("|\n");
}
int num,count=0,true=0;
fflush(stdin);
printf("\nenter the no words to find :  ");
scanf("%d",&num);
dict tofind[num];
printf("\n\nENTER WORDS\n");
for(i=0;i<num;i++)
{
    printf("-> ");
    fflush(stdin);
    gets(tofind[i].word);
}
printf("\n\n\n");
int points=0;
for(i=0;i<num;i++)
{
    points+=rightleft(&boggle[0][0],n,m,tofind[i].word);
    points+=updown(&boggle[0][0],n,m,tofind[i].word);
    points+=dia(&boggle[0][0],n,m,tofind[i].word);
    if(updown(&boggle[0][0],n,m,tofind[i].word)==1 || rightleft(&boggle[0][0],n,m,tofind[i].word)==1 || dia(&boggle[0][0],n,m,tofind[i].word)==1)
    puts(tofind[i].word);
}

printf("\ntotal points %d",points*1000);
//points+=rightleft(&boggle[0][0],n,m,tofind[0].word);
//int ans1=updown(&boggle[0][0],n,m,tofind[0].word);
//printf("\n\n\n%d",ans);
/*for(int i=0;i<n;i++)
{
    for (j=0;j<m;j++)
    {
       if(tofind[k].word[f]==boggle[i][j])
        {
            for(int krdo=0;i<strlen(tofind[k].word)+i;krdo++)
            {
                if(tofind[k].word[krdo]==boggle[krdo+i][j])
                {
                    count++;
                    if(count==strlen(tofind[k].word))
                    {true=1; goto end;}
                }

            }
            count=0;
            for(int krdo=i;i>n-strlen(tofind[k].word)-1;krdo--)
            {
                if(tofind[k].word[krdo]==boggle[krdo+i][j])
                {
                    count++;
                    if(count==strlen(tofind[k].word))
                    {true=1; goto end;}
                }

            }

        }
       else if(i==n-1 && j==m-1)
       k++;
    }
}
end:
if(true==1)
printf("ohhh gosh find it\n");*/
return 0;
}
int rightleft(char *array,int n,int m,char word[25])
{
    char boggle[n][m];
    int i,j,k=0,count=0,True=0,run=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            boggle[i][j]=array[k++];
        }
    }
for(int i=0;i<n;i++)
{
    for (j=0;j<m;j++)
    {
       if(word[0]==boggle[i][j])
        {
            for(int krdo=0;krdo<strlen(word);krdo++)
            {//printf( " [b=%c w=%c] ",boggle[i+krdo][j],tofind[k].word[krdo]);
                if(word[krdo]==boggle[i][krdo+j])
                {
                    //printf( " %c ",boggle[i+krdo][j]);
                    count++;
                    if(count==strlen(word))
                    {True=1; 
                    goto end;
                    }
                }

            }
            count=0;
            for(int krdo=0;run<strlen(word);krdo--)
            {
            //printf( " [b=%c w=%c] ",boggle[i+krdo][j],tofind[k].word[krdo]);
                if(word[krdo]==boggle[i][krdo+j])
                {
                    count++;
                   // printf( " %c ",boggle[i+krdo][j]);
                    if(count==strlen(word))
                    {True=1; goto end;}
                }run++;

            }
    run=0;
        }
      // else if(i==n-1 && j==m-1)
      // k++;
    }
}
end:
if(True==1)
{//printf("ohhh gosh find it\n");

return 1;}
else
return 0;

}
int updown(char *array,int n,int m,char word[25])
{
    char boggle[n][m];
    int i,j,k=0,count=0,True=0,run=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            boggle[i][j]=array[k++];
        }
    }
    for(int i=0;i<n;i++)
{
    for (j=0;j<m;j++)
    {
       if(word[0]==boggle[i][j])
        {
            for(int krdo=0;krdo<strlen(word);krdo++)
            {
                if(word[krdo]==boggle[i+krdo][j])
                {
                    count++;
                    if(count==strlen(word))
                    {True=1; goto end;}
                }

            }
            count=0;
            for(int krdo=0;run<strlen(word)-1;krdo--)
            {
                if(word[krdo]==boggle[i+krdo][j])
                {
                    count++;
                    if(count==strlen(word))
                    {True=1; goto end;}
                    run++;
                }

            }

        }
       
    }
}
end:
if(True==1)
{//printf("ohhh gosh find it\n");

return 1;}
else
return 0;
}
int dia(char *array,int n,int m,char word[25])
{
    char boggle[n][m];
    int i,j,k=0,count=0,True=0,run=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            boggle[i][j]=array[k++];
        }
    }
    for(int i=0;i<n;i++)
{
    for (j=0;j<m;j++)
    {
       if(word[0]==boggle[i][j])
        {
            for(int krdo=0;krdo<strlen(word);krdo++)
            {
                if(word[krdo]==boggle[i+krdo][j-krdo])
                {
                    count++;
                    if(count==strlen(word))
                    {True=1; goto end;}
                }

            }
            count=0;
            for(int krdo=0;run<strlen(word)-1;krdo--)
            {
                if(word[krdo]==boggle[i-krdo][j+krdo])
                {
                    count++;
                    if(count==strlen(word))
                    {True=1; goto end;}
                    run++;
                }

            }

        }
       
    }
}
end:
if(True==1)
{//printf("ohhh gosh find it\n");

return 1;}
else
return 0;
}