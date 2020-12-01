#include <stdio.h>
#include <stdlib.h>

struct aluno
{
	char nome[10];
	float P1, P2;
	int faltas;
};

main()
{
	struct aluno alunos[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		system("cls");
		printf("digite o nome:\n");
		scanf("%s", alunos[i].nome);
		printf("digite a primeira nota:\n");
		scanf("%f", &alunos[i].P1);
		printf("digite a segunda nota:\n");
		scanf("%f", &alunos[i].P2);
		printf("digite a quantidade de faltas:\n");
		scanf("%d", &alunos[i].faltas);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", alunos[i].nome);
		printf("%2.1f\n", alunos[i].P1);
		printf("%2.1f\n", alunos[i].P2);
		printf("%d\n", alunos[i].faltas);
	}
}
