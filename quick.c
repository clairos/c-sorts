#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int start, int end) // acha a posicao da partição
{
    // seleciona o final do vetor como pivô
    int pivot = arr[end];

    // ponteiro para um elemento maior
    int i = (start-1);

    // caminha por cada elemento do array e compara com o pivô
    for (int j=start; j<end; j++)
    {
        if (arr[j]<=pivot)
        { // se achar um elemento menor que o pivô, troca ele com o elemento maior em i
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // troca o pivô com o elemento em i
    swap(&arr[i+1], &arr[end]);

    return (i+1);
}

void quick_sort(int arr[], int start, int end)
{
    if (start<end)
    {
        // encontra o pivô onde os elementos menores estao à esquerda e maiores à direita
        int pivot = partition(arr, start, end); // separa os dados em 2 partições

        // ordena para a esquerda
        quick_sort(arr, start, pivot-1);
        // ordena para a direita
        quick_sort(arr, pivot+1, end);
    }
}

int main()
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