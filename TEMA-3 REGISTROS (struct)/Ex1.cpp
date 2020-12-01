#include <stdio.h>
#include <stdlib.h>

struct aluno
{
	char nome[40];
	float P1, P2;
	int faltas;
};

main()
{
	struct aluno aluno1;
	printf("digite o nome:\n");
	gets(aluno1.nome);
	printf("digite a primeira nota:\n");
	scanf("%f", &aluno1.P1);
	printf("digite a segunda nota:\n");
	scanf("%f", &aluno1.P2);
	printf("digite a quantidade de faltas:\n");
	scanf("%d", &aluno1.faltas);

	printf("%s\n", aluno1.nome);
	printf("%2.1f\n", aluno1.P1);
	printf("%2.1f\n", aluno1.P2);
	printf("%d\n", aluno1.faltas);
}
