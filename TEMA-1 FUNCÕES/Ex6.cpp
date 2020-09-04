#include<stdio.h>
#include<stdlib.h>
	void apresente_linha();
main( )
{ 
   int i; 
   //apresentacao do cabecalho
   apresente_linha( );
   printf("Numeros entre 1 e 5\n");
   apresente_linha( );
   // Escrita dos numeros
   for (i=1;i<=5;i++)
        printf("%d\n",i);
   apresente_linha( );
   system("pause");
}
void apresente_linha()
 {
  int i;   
  for (i=1;i<20;i++) 
       printf("*");
  printf("\n");    
 }

