#include <stdio.h>

void troca(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) // acha a posicao da partition
{
    // seleciona o final do vetor como pivo
    int pivo = arr[high];

    // ponteiro para um elemento maior
    int i = (low-1);

    // caminha por cada elemento do array e compara com o pivo
    for (int j=low; j<high; j++)
    {
        if (arr[j]<=pivo)
        {
            // se achar um elemento menor que o pivo, troca ele com o elemento maior em i
            i++;
            troca(&arr[i], &arr[j]);
        }
    }

    // troca o pivo com o elemento em i
    troca(&arr[i+1], &arr[high]);

    return (i+1);
}

void quick_sort(int arr[], int low, int high)
{
    if (low<high)
    {
        // encontra o pivo onde os elementos menores estao à esquerda e maiores à direita
        int pivo = partition(arr, low, high);

        // ordena para a esquerda
        quick_sort(arr, low, pivo-1);
        // ordena para a direita
        quick_sort(arr, pivo+1, high);
    }
}

int main(void)
{
    int arr[10], size = sizeof(arr)/sizeof(arr[10]);

    printf("digite 10 números inteiros:\n");

    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("----------------------------\n");
    
    printf("unsorted array: \n");
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("----------------------------\n");

    quick_sort(arr, 0, size-1);
    
    printf("sorted array: \n");
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
  return 0;
}