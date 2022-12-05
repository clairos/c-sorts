#include <stdio.h>

void new_heap(int *arr, int i, int f)
{
    int aux = arr[i];
    int j = i * 2 + 1;

    while (j <= f)
    {
        if (j < f)
        {   
            // se o pai tiver 2 filhos, procura quem é o maior
            if (arr[j] < arr[j + 1])
            { 
                j = j + 1;
            }
        }

        if (aux < arr[j])
        {
            // se o filho for maior que o pai, o filho se torna o pai
            arr[i] = arr[j];
            i = j;
            j = 2 * i + 1;
        }
        else
        {
            j = f + 1;
        }
    }

    arr[i] = aux; // antigo pai ocupa lugar do último filho analisado
}

void heap_sort(int *arr, int N)
{
    int i, aux;
    for (i = (N - 1) / 2; i >= 0; i--)
    {
        new_heap(arr, i, N - 1);
        // cria heap a partir dos dados
    }

    for (i = N - 1; i >= 1; i--)
    {
        aux = arr[0];
        arr[0] = arr[i];
        arr[i] = aux;
        // pega o maior elemento da heap e coloca na sua poição correspondente no array
        // o maior elemento sempre estará no topo da árvore, então sempre irá para a última posição do array
        new_heap(arr, 0, i - 1); // reconstrói heap
    }
}

int main()
{
    int arr[5], size = sizeof(arr)/sizeof(arr[10]);

    printf("digite 5 números inteiros:\n");

    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("-------------------------\n");

    printf("unsorted array:\n");
    for (int i=0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("-------------------------\n");

    heap_sort(arr, size);

    printf("sorted array:\n");
    for (int i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}