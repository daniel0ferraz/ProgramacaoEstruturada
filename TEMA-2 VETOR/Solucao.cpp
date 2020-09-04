#include<stdio.h>
main()
{
 float nota[5];
 int i,acima_media=0;
 float media=0,soma=0,cont=0;
 for(i=0;i<5;i++)
 {
   printf("A nota do aluno posicao %d e: ",i);
   scanf("%f",&nota[i]);
   soma = soma+nota[i];
   cont++;
 }
 media = soma/cont;
 printf("\n A media da turma %2.1f",media);
for (i=0;i<5;i++)
{
  if (nota[i] > media)
  acima_media++;
}
  printf("\n Alunos acima da media:%d\n",acima_media); 
    
}

