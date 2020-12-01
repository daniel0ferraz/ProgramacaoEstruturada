#include <stdio.h>
#include <stdlib.h>
main()
{
     int x[] = {9, 10, 2, 6, 7, 4, 3, 5, 1, 8},
         IND[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     for (int i = 0; i < 10; i++)
          printf("[%d ", x[10 - x[i]]);
}
