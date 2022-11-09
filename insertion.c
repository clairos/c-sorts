#include <stdio.h>

int main()
{
    int p, i, j;
    int arr[5] = {4, 5, 2, 1, 3};

    for (i=1; i<5; i++)
    {
        p = arr[i];
        for (j=i; j<=i+1 && p<arr[j-1]; j--)
        {
            arr[j] = arr[j-1];
        }

        arr[j] = p;
    }

    for (i=0; i<5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}