#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int tam) 
{
    int i, j, aux;

    for (i = 0; i < tam; i++) // quantidade de vezes que vai ocorrer a troca dependendo do tamanho do vetor
    {
        for (j = 0; j < (tam - 1); j++) // vai da posição inicial 0, até a penúltima posição
        { // não verifica a última posição, pois ela já está no lugar correto e não precisa ser comparada
            if (arr[j] > arr[j + 1]) // verifica se o atual é maior que o próximo
            {
                aux = arr[j]; // faz a troca dos elementos
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int i, tam = 5, arr[5] = {5, 4, 3, 2, 1};

    for (i = 0; i < tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa somente o array normal
    }

    bubble_sort(arr, tam); // chama a funcao para executar o BS
    printf("-----------------------------\n");

    for (i = 0; i < tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa o array depois do sort
    }

    return 0;
}