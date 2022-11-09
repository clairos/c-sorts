#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int tam)
{
    int posMenor, i, j, penultimo, aux;
    penultimo = tam-1;

    for(i=0; i<penultimo; i++)
    {
        posMenor = i;
        for(j=i+1; j<tam; j++)
        {
            if(arr[j]<arr[posMenor])
            {
                posMenor = j;
            }
        }

        aux = arr[i];
        arr[i] = arr[posMenor];
        arr[posMenor] = aux;
    }
}

int main()
{
    int i, tam = 5, arr[5] = {7, 19, 3, -5, 2};

    for (i=0; i<tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa somente o array normal
    }

    selection_sort(arr, tam); // chama a funcao para executar o SS
    printf("\n-----------------------------\n");

    for (i=0; i<tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); 
    }

    return 0;
}