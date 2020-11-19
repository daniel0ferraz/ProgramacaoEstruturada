#include <stdio.h>
main()
{
   int i, vetor[3];

   for (i = 0; i < 3; i = i + 1)
   {
      printf("Entre o numero %d: ", i);
      scanf("%d", &vetor[i]);
   }

   for (i = 0; i < 3; i = i + 1)
   {
      printf("O numero %d foi %d \n", i, vetor[i]);
   }
   system("pause");
}
