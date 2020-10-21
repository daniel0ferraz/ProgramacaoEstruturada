#include <stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
 FILE *fp;
 char string[100];
 int i;
 fp = fopen("arquivo.txt","w");   /* Arquivo ASCII, para escrita */
 if(!fp)
 {
    printf( "Erro na abertura do arquivo");
    exit(0);
    system("pause");
 }
 printf("Entre com a string a ser gravada no arquivo:");
 gets(string);
  for(i=0; i<=strlen(string); i++) 
          putc(string[i], fp); /* Grava a string, caractere a caractere */
 fclose(fp);
 system("pause");
}
