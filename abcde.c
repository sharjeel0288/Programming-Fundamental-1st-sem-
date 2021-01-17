#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int KALEIDOSCOPE(int * ptr, int N, int seed);
int main()
{
int n;
a:
printf("enter the size of grid : ");
scanf("%d",&n);
if(n%2!=0)
goto a;
int seed ,grid[n][n];
printf("enter seed : ");
scanf("%d",&seed);
KALEIDOSCOPE(&grid[0][0],n,seed);
return 0;
}
int KALEIDOSCOPE(int * ptr, int N, int seed)
{
	int num = (( N * N ) + 1)/2;
	ptr[num]=seed;
	int grid[N][N],l=1,i,j;
	for(i=N; i>=1; i--)
    {
        // First inner part of upper half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
			grid[i][j]=(((N+1)/2)*2*seed)/l;
        }
		l++;
        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
			grid[i][j]=(((N+1)/2)*2*seed)/l;
        }

        // Third inner part of upper half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);grid[i][j]=(((N+1)/2)*2*seed)/l;
        }

        printf("\n");
    }
l=4;
    // Second lower half of the pattern
    for(i=1; i<N; i++)
    {
        // First inner part of lower half
        for(j=N; j>i; j--)
        {
			grid[i][j]=(((N+1)/2)*2*seed)/l;
            printf("%d", j);
        }
l-=2;
        // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
				grid[i][j]=(((N+1)/2)*2*seed)/l;
        }

        // Third inner part of lower half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
				grid[i][j]=(((N+1)/2)*2*seed)/l;
        }

        printf("\n");
    }
}