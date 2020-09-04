#include<stdio.h>
#include<stdio.h>
	 float Media(float, float, float);
     main ()
     {
     	float nota1, nota2, nota3;
     	
     	printf("\n Nota 1:");
     	scanf("%f",&nota1);
     	printf("\n Nota 2:");
     	scanf("%f",&nota2);
     	printf("\n Nota 3:");
     	scanf("%f",&nota3);
     	
     	printf("A media do aluno: %.1f", Media(nota1, nota2, nota3));
     	
	 }
	 
	float Media(float n1, float n2, float n3) 
	{
		return (n1+n2+n3) / 3;
	}
