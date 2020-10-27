#include <stdio.h>
int main()
{
  // Declarando matriz e variaveis
  int Mat[4][3];
  int soma_linha[3];
  int i, j;

  for (i = 1; i < 3; i++)
  {
    for (j = 1; j < 4; j++)
    {
      printf("Informe um numero:");
      scanf("%d", &Mat[i][j]);
    }
  }

  for (i = 1; i < 3; i++)
  {
    soma_linha[i] = 0;
    for (j = 1; j < 4; j++)
    {
      soma_linha[i] = soma_linha[i] + Mat[i][j];
    }
  }

  printf("Vetor Soma_linha");
  for (i = 1; i < 3; i++)
  {
    printf("Soma:", soma_linha[i]);
  }
}
