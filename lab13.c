#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void mazehelp(int maze[][4], int n, int **ptr, int x, int y);
void ratintrap(int n,int maze[][4]);
void print(int **ptr,int n)
{
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("  %d  ", ptr[i][j]);
            }
            printf("\n");
        }
}
int main()
{
    int n ;
    printf("enter N : ");
    scanf("%d",&n);
    int maze[n][n];

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("\nelement (%d,%d) : ",i,j);
        scanf("%d",&maze[i][j]);
    }
}
    ratintrap(n,maze) ;
    return 0;
    
}
void ratintrap(int n,int maze[4][4])
{

    int i, **ptr;
    for (i = 0; i < n; i++)
        ptr[i] = (int *)calloc(n, sizeof(int));
printf("in trap");
    mazehelp(maze, n, ptr, 0, 0);
}
void mazehelp(int maze[][4], int n, int **ptr, int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        ptr[x][y] = 1;
        //print(ptr,n);
    }
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || maze[x][y] == 1)
      { return;}

    ptr[x][y] = 1;
    mazehelp(maze, n, ptr, x - 1, y);
    mazehelp(maze, n, ptr, x + 1, y);
    mazehelp(maze, n, ptr, x, y - 1);
    mazehelp(maze, n, ptr, x, y + 1);
    ptr[x][y] = 0;
}