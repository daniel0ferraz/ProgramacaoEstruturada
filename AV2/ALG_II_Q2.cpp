#include <stdio.h>
#include <stdlib.h>
main()
{
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        vet[i] = 0;
        for (int j = 0; j <= i; j++)
        {
            vet[i] += j + 1;
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", vet[i] - vet[5 - i - 1]);
    }
}
