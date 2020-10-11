#include<stdio.h>
#define LINHA 2
#define COLUNA 5
main()
{
  // Para declarar uma Matriz 2x5
  float Notas [LINHA][COLUNA]= {
  { 8.1, 7.2, 5.5, 6.9, 9.0 },
  { 10.0, 7.0, 9.5, 2.3, 7.8}
};

// Para declarar uma Matriz 3 linhas * 5 colunas 
float Notas2 [3][5]={ { 8.1, 7.2, 5.5, 6.9, 9.0 },
                      { 10.0, 7.0, 9.5, 2.3, 7.8},
                      { 8.5, 7.1, 5.7, 0.9, 10.0 },
                    };
int li, col;


// EXIBINDO VALORES DA MATRIZ 2X5
for (li=0; li < LINHA; li++)
	{
		for (col=0; col<COLUNA; col++)
		printf("%2d",Notas[LINHA][COLUNA]);
		printf("\n");
	}
	
}
