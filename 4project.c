#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int r, c = 4, i, j, count; 
    printf("enter the number of districts : ");
    scanf("%d",&r);

	int *arr[r]; 
	for (i=0; i<r; i++) 
		arr[i] = (int *)malloc(c * sizeof(int)); 

	// Note that arr[i][j] is same as *(*(arr+i)+j) 
	count = 0; 
	for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
		arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count 

	for (i = 0; i < r; i++){
	for (j = 0; j < c; j++) 
		printf("%-4d ", arr[i][j]); 
		printf("\n");}

	/* Code for further processing and free the 
	dynamically allocated memory */
for(i=0;i<r;i++)
free(arr[i]);
return 0; 
} 
