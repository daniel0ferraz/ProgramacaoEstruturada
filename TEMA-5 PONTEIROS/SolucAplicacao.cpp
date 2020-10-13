#include <stdio.h>
void troca(int *p, int *q)
{
      int temp;
      temp = *p;
      *p = *q;
      *q = temp;
}
main()
{
      int i, j;
      printf("Digite o valor de i ");
      scanf("%d", &i);
      printf("Digite o valor de j ");
      scanf("%d", &j);
      int *p, *q;
      p = &i;
      q = &j;
      troca(p, q);
      printf("Valor de i %d\n", i);
      printf("Valor de j %d\n", j);
}
