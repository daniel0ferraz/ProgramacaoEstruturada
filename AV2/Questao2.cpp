#include<stdio.h>
#include<stdlib.h>
/*Aluno: Daniel Ferraz Coelho | T145
*/
main(){
	int ind, num[10], j, k;
	
	for(ind=0;ind<10;ind++){
		scanf("%d", &num[ind]);
		
		for (j=0;j<ind; j++) {
		  if (num[ind]==num[j]){
			printf("\nNumero repetido, digite outro :( \n");
			ind--;
			/*a execu��o da instru��o atual do bloco de instru��es ser�
			   interrompida e passa para a pr�xima repeti��o do la�o.*/
			continue;
	       }
	   } 
	}

	for(ind=0;ind<10;ind++) {
		printf("\nInd[%d]Vetor[%d]",ind, num[ind]);
	}
}
