#include <stdio.h>
main()
{
  int x[10], y[10];
  int i;

  for (i = 1; i <= 10; i++)
  {
    printf("Informe 10 valores inteiros:");
    scanf("%d", &x[i]);
    if (x[i] % 2 == 0)
      y[i] = 1;
    else
      y[i] = 0;
  }

  for (i = 1; i <= 10; i++)
  {
    printf("X: %d\n", x[i]);
    printf("Indice[i]:%d\n", i);
    printf("Y:%d\n", y[i]);
    printf("\n");
  }
}
