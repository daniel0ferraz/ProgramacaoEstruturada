#include <stdio.h>
#include <stdlib.h>
main()
{
        int ent, n, cont = 0, *numeros = NULL, *mais_numeros;
        do
        {
                printf("Entre com um valor inteiro (0 para encerrar): ");
                scanf("%d", &ent);
                cont++;
                mais_numeros = (int *)realloc(numeros, cont * sizeof(int)); /* realloc porque ja havia sido alocado NULL para numeros */
                if (mais_numeros != NULL)
                {
                        numeros = mais_numeros;
                        numeros[cont - 1] = ent;
                }
                else
                {
                        free(numeros);
                        puts("Erro ao (re)alocar memoria");
                        exit(1); /* aborta o programa e retorna 1 para o sist. operacional */
                }
        } while (ent != 0);
        printf("Numeros entrados: ");
        for (n = 0; n < cont; n++)
                printf("%d ", numeros[n]);
        free(numeros);
        system("pause");
}
