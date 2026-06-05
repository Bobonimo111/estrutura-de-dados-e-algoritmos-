#include <stdio.h>
#include <malloc.h>

/**
 * Algoritmo de ordenação simples
 * Compara o maior valor e armazena em um novo array,
 * Esse algoritmo deve retornar um novo array
 */

int main()
{
    // int lista[] = {1, 10, 2, 9, 4, 5, 3};

    // int *n = (int *)malloc(sizeof(int));

    // *n = sizeof(lista) / sizeof(lista[0]);

    // for (int i = 0; *n > i; i++)
    // {
    //     printf("%i , ", lista[i]);
    // }

    return 0;
}

int *ordenacao(int *arr, int *range)
{
    int *count = (int *)malloc(sizeof(int));

    *count = 0;

    if (count == range || range < count)
    {
        return 0;
    }

    // Vou alocar o suficiente para um array de inteiros
    int *array_retorno = (int *)malloc(*range * sizeof(int));
    // Vou alocar para um processo intermediario
    int *staging = (int *)malloc(sizeof(int));

    int *j = (int *)malloc(sizeof(int));

    for (count; count < range; count++)
    {
        staging = &arr[*count];
        for (count; count < range; count++)
        {
        }
    }
}