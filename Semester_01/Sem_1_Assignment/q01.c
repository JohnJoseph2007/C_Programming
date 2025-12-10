// Use call-by-address to bubble sort an array of integers.

#include <stdio.h>
void bubbleSort(int *, int);
int main()
{
    int arr[30], size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    // Sorting
    bubbleSort(arr, size);
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                *(arr + j) = *(arr + j) + *(arr + j + 1);
                *(arr + j + 1) = *(arr + j) - *(arr + j + 1);
                *(arr + j) = *(arr + j) - *(arr + j + 1);
            }
        }
    }
}