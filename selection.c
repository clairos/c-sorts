#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int tam)
{
    int posMenor, i, j, penultimo, aux;
    penultimo = tam - 1;
    // faz a troca para todas as posições menos a última
    // isso pq o maior valor ja vai estar correto na ultima posição depois das trocas

    for (i = 0; i < penultimo; i++)
    {
        posMenor = i; // a menor posição é aquela que vc já está (i)
        // procura o menor elemento em relação a i
        for (j = i + 1; j < tam; j++) // vai desde a próxima posição até o final do vetor
        { 
            if (arr[j] < arr[posMenor]) // se a posição j for menor que a posição menor, faz a troca
            {
                posMenor = j;
            }
        }

        if (i != posMenor)
        { // se i for diferente da menor, troca os elementos utilizando um auxiliar
            aux = arr[i];
            arr[i] = arr[posMenor];
            arr[posMenor] = aux;
        }
    }
}

int main()
{
    int i, tam = 5, arr[5] = {7, 19, 3, -5, 2};

    for (i = 0; i < tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa somente o array normal
    }

    selection_sort(arr, tam); // chama a funcao para executar o SS
    printf("\n-----------------------------\n");

    for (i = 0; i < tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}