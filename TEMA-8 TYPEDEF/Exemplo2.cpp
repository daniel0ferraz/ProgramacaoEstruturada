#include <stdio.h>
 main() {
    int i, arranjo[5] = { 2, 4, 3, 1, 5 };
    
    for (i=0;i<5;i++)
	printf("%d,",arranjo[i]);
    printf("\n Endereco do Vetor: %p\n", arranjo); 
    printf("Primeiro Elemento do Vetor: %d\n", arranjo[0]); 
    printf("Primeiro inteiro do endereco apontado: %d\n", *arranjo);
    printf("Quarto Elemento do Vetor: %d\n", arranjo[3]); 
    printf("Terceiro Endereco Apos o Inicio do Vetor: %p\n", arranjo+3);
    printf("Valor do Terceiro Endereco apos o Inicio do Vetor: %d\n", *(arranjo+3));
   
}

