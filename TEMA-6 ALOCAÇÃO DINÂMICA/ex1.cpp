#include <stdio.h>
#include<stdlib.h>
main()
  {  
       unsigned short int tamanho; /*unsigned - apenas positivos short - valores pequenos*/
       char *string; /*ponteiro para char, é necessário que seja uma ponteiro para ser alocado*/  
       printf("\nDigite o tamanho da string: ");
       scanf("%d",&tamanho);  
       string= (char *)malloc( tamanho * sizeof(char) ); /*o sizeof ajuda a aumentar a portabilidade*/  
       printf("\nDigite a string: ");
       scanf("%s",string); //sem o & antes de string pois já é endereço 
       printf("\n%s",string);
       free(string); /*libera a memória alocada*/ 
       system("pause");
} 

