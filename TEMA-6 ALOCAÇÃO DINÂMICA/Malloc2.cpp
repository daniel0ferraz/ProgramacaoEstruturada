#include<stdio.h>
#include<stdlib.h>

main()
{
  unsigned short int tamanho;
  char*string;

  printf("\n Digite o tamanho da string:");
  scanf("%d",&tamanho);
  string=(char*)malloc(tamanho*sizeof(char));
  printf("\n Digite a string:");
  scanf("%s",string); // Sem o & antes de string pois ja e endereco
  printf("\n %s",string);
  free(string); // libera memoria alocada
  
}