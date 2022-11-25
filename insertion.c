#include <stdio.h>

int main()
{
    int i, j, aux, v[5] = {4, 5, 2, 1, 3};
    int size = sizeof(v)/sizeof(v[5]);

    for (i = 1; i < size; i++) // percorre da posição 1 até o final do vetor
    {
        aux = v[i];
        // percorre da direita pra esquerda (por isso j--)
        /*
        enquanto j for maior que 0 e o aux for menor
        que qualquer valor na posição j, vai voltando
        o índice de j e copiando os elementos p/ frente
        pega o valor de i e INSERE no seu devido lugar
        */
        for (j = i; (j > 0) && (aux < v[j - 1]); j--) 
        {
            v[j] = v[j - 1];
        }

        v[j] = aux;
        // move os elementos maiores para frente
    }

    for (i = 0; i < 5; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}