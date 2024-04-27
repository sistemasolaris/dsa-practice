#include <stdio.h>

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int val = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > val)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = val;
    }
}

int main(void)
{
    int array[10] = {3, 5, 7, 2, 4, 1, 5, -2, 9, 0};
    int size = 10;
    
    printf("Unsorted array: [ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    insertionSort(array, size);

    printf("Sorted array: [ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    return 0;
}