#include<stdio.h>
#include<string.h>
/*Aluno: Daniel Ferraz Coelho | T145
  Matricula: 2020100646
*/
void troca(char *vet)
{
   int ind, tam;
   // Retorna o tamanho de caracteres da string vet
   tam = strlen(vet);
   for (ind = 0; ind < tam; ind++)
   {
      switch (*vet)
      {
      case 'a': *vet = 'u'; break;
      case 'e': *vet = 'o'; break;
      case 'i': *vet = 'u'; break;
      case 'o': *vet = 'a'; break;
      case 'u': *vet = 'e'; break;
      }
      vet++;
   }
}

void imprime(char *vet)
{
   int ind;
   char *ptr;
   ptr = vet;

   for (ind = 0; ind < strlen(vet); ind++)
   {
      printf("%c", *ptr);
      ptr++;
   }
}
main()
{
   char vet[100];

   printf("\nDigite uma frase minuscula:");
   gets(vet);
   troca(vet);
   imprime(vet);
}
