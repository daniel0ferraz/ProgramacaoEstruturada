#include <stdio.h>
#include <stdlib.h>

main()
{
  unsigned short int tamanho;
  char *string;

  printf("\n Digite o tamanho da string:");
  scanf("%s", &tamanho);
  string = (char *)calloc(tamanho, sizeof(char));
  printf("\nDigita a string");
  scanf("%s", string);
  printf("\n%s", string);
  free(string);
}