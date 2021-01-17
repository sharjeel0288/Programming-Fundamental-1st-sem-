#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void input(int *take, int n, char **m, char **d);
void output(int *take, int n, char **m, char **d);
void mt(int *take, int n, char **m, char **d);
void dt(int *take, int n, char **m, char **d);
void sup(int *take, int n, char **d);
int main()
{
    int n = 5;
    int arr[n][n], i, j;
    char *months[] = {"jan", "feb", "march", "april", "may"};
    char *dep[] = {"surgery", "emergency", "skin", "covid-19", "dentistry"};
//gets(months[0])
    input(&arr[0][0], n, months, dep);
    output(&arr[0][0], n, months, dep);
    dt(&arr[0][0], n, months, dep);
    mt(&arr[0][0], n, months, dep);
    sup(&arr[0][0], n, dep);
    return 0;
}
void input(int *take, int n, char **m, char **d)
{//1 2 3
//4 5 6
//7 8 9  take 101
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nenter expense of %s  department of month : %s =  ", d[i], m[j]);
            scanf("%d", (take + (i * n) + j));//take[i][j] (take+i+j)
        }
    }
}
void output(int *take, int n, char **m, char **d)
{printf("\n\n==========================================================================================================\n");
    printf("%25s %10s %13s %13s %13s\n",m[0],m[1],m[2],m[3],m[4]);
    printf("==========================================================================================================\n\n");
    int i, j,check=1,loop=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(check==1)
            printf("%-15s |", d[loop++] );
            check=0;
            printf("    %-6d  |",*(take + (i*n)+j));
        }
        check=1;
        printf("\n");
    }
    printf("==========================================================================================================\n");
}
void mt(int *take, int n, char **m, char **d)
{
   printf("\n\n==========================================================================================================\n");
    printf("%25s %10s %13s %13s %13s\n",m[0],m[1],m[2],m[3],m[4]);
    printf("==========================================================================================================\n\n");
    int i, j,check=1,loop=0,sum[n];
    for(i=0;i<n;i++)
    sum[i]=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i]+=*(take+(j*n)+i);
            if(check==1)
            printf("%-15s |", d[loop++] );
            check=0;
            printf("    %-6d  |",*(take + (i*n)+j));
        }
        check=1;
        printf("\n");
        
    } printf("%-15s |", "TOTAL" );
    for(i=0;i<n;i++)  
    printf("    %-6d  |",sum[i]);

    printf("\n==========================================================================================================\n");
}
void dt(int *take, int n, char **m, char **d)
{
    printf("\n\n==========================================================================================================\n");
    printf("%25s %10s %13s %13s %13s %13s\n",m[0],m[1],m[2],m[3],m[4],"TOTAL");
    printf("==========================================================================================================\n\n");
    int i, j,check=1,loop=0,sum=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {sum+=*(take + (i*n)+j);
            if(check==1)
            printf("%-15s |", d[loop++] );
            check=0;
            printf("    %-6d  |",*(take + (i*n)+j));
        }
         printf("    %-6d  |",sum);
         sum=0;
        check=1;
        printf("\n");
    }
    printf("==========================================================================================================\n");
}
void sup(int *take, int n, char **d)
{
 printf("\n\n==========================================================================================================\n");   
    int i, j,check=1,loop=0,sum=0,low=*(take),lowrow=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {sum+=*(take + (i*n)+j);
            if(check==1)
            printf("%-15s |", d[loop++] );
            check=0;
            

            
        }
        if(50000<=sum)
        {
            printf(" will need federal support ");
        }
         else
         {
           printf(" will not need federal support ");
         }
         
         sum=0;
        check=1;
        printf("\n");
    }
    printf("==========================================================================================================\n");

    
}
void lex(int *take, int n, char **m, char **d)
{
   printf("\n\n==========================================================================================================\n");
    printf("%25s %10s %13s %13s %13s %13s\n",m[0],m[1],m[2],m[3],m[4],"stable month");
    printf("==========================================================================================================\n\n");
    int i, j,check=1,loop=0,sum[n],low,lowrow;
    for (i = 0; i < n; i++)
    {low=*(take+(n*i)+j);
        for (j = 0; j < n; j++)
        {
            sum[i]=*(take+(j*n)+i);
            if(check==1)
            printf("%-15s |", d[loop++] );
            else if(low>*(take + (i*n)+j))
            {
                low=*(take + (i*n)+j);
                lowrow=j;
            }
            check=0;
            printf("    %-6d  |",*(take + (i*n)+j));
        }
        printf("  %-10s",m[lowrow]);
        check=1;
        printf("\n");
        
    } printf("%-15s |", "TOTAL" );
    for(i=0;i<n;i++)  
    printf("    %-6d  |",sum[i]);

    printf("\n==========================================================================================================\n");
}