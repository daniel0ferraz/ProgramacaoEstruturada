#include<stdio.h>
#include<stdlib.h>
/*Aluno: Daniel Ferraz Coelho | T145
  Matricula: 2020100646
*/
main(){
	int ind, num[10], j, k;
	
	for(ind=0;ind<10;ind++){
		scanf("%d", &num[ind]);
		
		for (j=0;j<ind; j++) {
		  if (num[ind]==num[j]){
			printf("\nNumero repetido, digite outro :( \n");
			ind--;
			/*a execução da instrução atual do bloco de instruções será
			   interrompida e passa para a próxima repetição do laço.*/
			continue;
	       }
	   } 
	}

	for(ind=0;ind<10;ind++) {
		printf("\nInd[%d]Vetor[%d]",ind, num[ind]);
	}
}
