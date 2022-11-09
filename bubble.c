#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int tam) // vai trocando a posição com o número da frente caso seja maior
{
    int i, j, aux;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<(tam-1-i); j++) 
        {
            if(arr[j]>arr[j+1]) // verifica se o proximo é maior
            { 
                aux=arr[j]; 
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }        
    }
}

int main()
{
    int i, tam = 5, arr[5] = {5, 4, 3, 2, 1};

    for (i=0; i<tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa somente o array normal
    }

    bubble_sort(arr, tam); // chama a funcao para executar o BS
    printf("-----------------------------\n");

    for (i=0; i<tam; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]); // printa o array depois do sort
    }

    

    return 0;
}