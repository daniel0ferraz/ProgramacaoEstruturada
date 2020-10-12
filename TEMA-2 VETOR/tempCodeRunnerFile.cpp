#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[10];
  int i, maior = 1, IND_MAIOR;

  for (i = 1; i <= 10; i++)
  {
    printf("Informe 10 numeros:");
    scanf("%d", &x[i]);
  }

  for (i = 2; i <= 10; i++)
  {
    if (maior < x[i])
    {
      maior = x[i];
      IND_MAIOR = i;
    }
  }

  printf("maior: %d", maior);
  printf("Indice maior: %d", IND_MAIOR);
}