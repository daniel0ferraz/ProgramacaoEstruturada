#include<stdio.h>
#include<stdlib.h>
	struct media
	{
		char nome[10];
		float N1, N2, N3, media;
	};
	
	 main(){
	
		struct media alunos[5];
		int i;
		for(i=0;i<5;i++)
		{
			system("cls");
			printf("Nome:\n");
			scanf("%s",alunos[i].nome);
			printf("Primeira nota: \n");
			scanf("%f",&alunos[i].N1);
			printf("Segunda nota:\n");
			scanf("%f",&alunos[i].N2);
			printf("Terceira nota:\n");
			scanf("%f",&alunos[i].N3);
			
			alunos[i].media:= (N1+N2+N3)/3;
			
		}
		
		for(i=0; i<5;i++)
		{
			printf("\n Aluno:\n %s:",alunos[i].nome);
			printf("\n Nota1: %2.1f",alunos[i].N1);
			printf("\n Nota1: %2.1f",alunos[i].N2);
			printf("\n Nota1: %2.1f",alunos[i].N3);
	
		}
	}
