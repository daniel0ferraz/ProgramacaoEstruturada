#include <stdio.h>
main()
{
  char nome[6][30];
  int i;

  for (i = 1; i <= 6; i++)
  {
    printf("Informe Nome:");
    scanf("%s", &nome[i]);
  }
  // Exibindo nomes
  for (i = 1; i <= 6; i++)
  {
    printf("Nome[%d]:%s\n", i, nome[i]);
  }
}
