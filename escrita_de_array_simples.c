#include <stdio.h>
#include <malloc.h>

/**
 * Escrever um simples arrya na tela
 */

void func(int *arr, int *length)
{
    for (int i = 0; i < *length; i++)
    {
        printf("%i |", arr[i]);
    }
    printf("size : %i", *length);
}

int main()
{
    int arr[] = {1, 2, 3, 6, 5, 4, 8, 9, 5, 20};
    int length = (sizeof(arr) / sizeof(arr[0]));

    func(arr, &length);

    return 0;
}
