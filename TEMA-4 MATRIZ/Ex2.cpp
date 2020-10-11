#include<stdio.h>
#define DIM 3 // Definindo uma constante;

  main()
  {
    int linha, coluna;
    int valores[DIM][DIM];

    // escrevendo na matriz
    for (linha=0; linha < DIM; linha++) 
      for (coluna=0; coluna < DIM; coluna++)
      {
        printf("Linha[%d]Coluna[%d]:", linha+1, coluna+1);
        scanf("%d",&valores[linha][coluna]);
      }
      
      // Exibindo valores de matrizes
      for (linha=0; linha < DIM; linha++)
  		{
      	for (coluna=0; coluna < DIM; coluna++)
      	  printf("%3d",valores[linha][coluna]);
      	  
		  printf("\n");	
		}
  }
