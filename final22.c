#include <stdio.h>

void DoSomething(int data[], int out[], int size, int count[], int countSize, int val1, int val2)
{
    int i;
    for (i = 0; i < size; i++)
        count[data[i]] = count[data[i]] + 1;
    for (i = 1; i < countSize; i++)
        count[i] = count[i] + count[i - 1];
    for (i = 0; i < size; i++)
    {
        int temp = count[data[i]] - 1;
        out[temp] = data[i];
        count[data[i]] = count[data[i]] - 1;
    }
    val2 = out[size - 1];
    val1 = out[0];
}
void OutputArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
void main()
{
    int numbers[7] = {1, 4, 1, 2, 7, 5, 2}, out[7], count[10] = {0}, val1 = 99, val2 = 99;
    DoSomething(numbers, out, 7, count, 10, val1, val2);
    OutputArray(numbers, 7);
    OutputArray(out, 7);
    OutputArray(count, 10);
    printf("val1 is %d and val2 is %d ", val1, val2);
    return;
}