#include <stdio.h>
#include <stdlib.h>
main()
{
  int x[10];
  // podemos armazenar 10 valores inteiros na variável x;
  char nome[10][30];
  float nota[10];
  float media, soma = 0;
  int i, n;
  // Leitura do N° de alunos
  printf("N de Alunos:\n");
  scanf("%d", &n);
  // Leitura dos dados!
  for (i = 1; i < n; i++)
  {
    printf("Nome:");
    scanf("%s", &nome[i]);
    printf("Nota:");
    scanf("%f", &nota[i]);
    soma = soma + nota[i];
  }
  // Calculo da media
  media = soma / n;
  // Impressão
  for (i = 1; i < n; i++)
  {
    if (nota[i] > media)
      printf("Nome: %s\n Nota: %.1f", nome[i], nota[i]);
  }
}
