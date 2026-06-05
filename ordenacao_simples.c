#include <malloc.h>

/**
 * Algoritmo de ordenação simples
 * Compara o maior valor e armazena em um novo array,
 * Esse algoritmo deve retornar um novo array, em ordem desc ou cres
 * complexidade : O^2
 */
int *organizar_arr(int *arr, int *length)
{

    int staging = 0;
    int arr_stage[*length];

    for (int i = 0; i < *length; i++)
    {
        for (int j = 0; j < *length; j++)
        {
            if (arr[i] < arr[j] && arr[j] > staging)
            {
                staging = arr[j];
            }
        }
        arr[i] = staging;
    }
    return arr_stage;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 8, 9, 3, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *novo_arr = organizar_arr(arr, &length);
}
>>>>>>> origin/main
