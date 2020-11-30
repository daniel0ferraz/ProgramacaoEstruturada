#include<stdio.h>
#include<stdlib.h>
/*Aluno: Daniel Ferraz Coelho | T145
  Matricula: 2020100646
*/
main() {

int num = 0,
    linha,
	coluna, matriz[5][5]; 

printf("Informe os num da matriz: \n");  

for(linha = 0; linha<5; linha++){
 for(coluna = 0; coluna<5; coluna++){
  printf("Linha: [%d] Coluna: [%d] ", linha+1, coluna+1);
  scanf("%d", &matriz[linha][coluna]);  

 }
}  

printf("Digite um numero para pesquisar na matriz: \n");
scanf("%d", &num);

for(linha = 0; linha<5; linha++){
 for(coluna = 0; coluna<5; coluna++){
  if(matriz[linha][coluna] == num){
   printf("Numero encontrado na linha: [%d] Coluna: [%d]\n", linha+1, coluna+1);
  }

 }
}


}
