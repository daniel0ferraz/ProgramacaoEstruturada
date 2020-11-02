#include <stdio.h>
int main()
{
  // Declarando matriz e variaveis
  int Mat[3][4];
  int Soma;
  int i, j;

  for (i = 1; i < 3; i++)
    for (j = 1; j < 4; j++)
    {
      printf("Informe um numero:");
      scanf("%d", &Mat[i][j]);
    }

  Soma = 0;
  for (i = 1; i < 3; i++)
    for (j = 1; j < 4; j++)
    {
      Soma = Soma + Mat[i][j];
    }

  printf("Soma: %d", Soma);
}
