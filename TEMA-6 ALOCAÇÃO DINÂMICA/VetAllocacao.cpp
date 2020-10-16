#include<stdio.h>
#include <stdlib.h>
main()
{
  int i;
  int *v;
  v = malloc(10*sizeof *v);  
  /*v[0] = 10;
  v[1] = 11;
  v[2] = 12;
  v[3] = 13;
  v[4] = 14;
  v[5] = 15;
  v[6] = 16;
  v[7] = 17;
  v[8] = 18;
  v[9] = 19;*/
  
  for(i = 0; i < 10; i++)
    printf("v[%d]: %d\n", i, v[i]);

  printf("Endereço de 'v': %p", v);  
  free(v);
  system("pause");
} 


  

