#include<stdio.h>
#include<stdlib.h>

main() {
   int i,vetor[3];
   vetor[0] = 3;
   vetor[1] = 12;
   vetor[2] = 4;
   
   i = 0;
   while (i < 3) {
         printf("%d\n",vetor[i]);
         i = i + 1;
   }   
system("pause");
}

