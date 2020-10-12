#include <stdio.h>
#include <stdlib.h>

main()
{
  float x, vet[10];
  int i, QN;

  printf("Numeros reais:");
  scanf("%d", &x);
  // Loop de leitura
  while (x != 9999)
  {
    QN = QN + 1; // icrementea Qn
    vet[QN] = x; // Armazena o valor lido em x em vet na posição QN
    printf("Numeros reais:");
    scanf("%d", &x);
  }

  for (i = 1; i <= QN; i--)
  {
    printf("Vet[%d]", i);
  }
}