#include <stdio.h>
#include <malloc.h>

void main()
{
    int arr[] = {1, 2, 3, 6, 5, 4, 8, 9, 5, 20};

    int *count = (int *)malloc(sizeof(int));

    *count = sizeof(arr) / sizeof(arr[0]);

    return 0;
}