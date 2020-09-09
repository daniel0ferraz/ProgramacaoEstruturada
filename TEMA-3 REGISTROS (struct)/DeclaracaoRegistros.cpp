#include<stdio.h>
struct funcionario
{
	char nome[30];
	int idade;
	char sexo;
	float altura;
};

main() {
	struct funcionario f;
	
	printf("Nome:\n");
	gets(f.nome);
	printf("Idade:\n");
	scanf("%d",&f.idade);
	scanf("%c",&f.sexo:="M");
	printf("Funcionario:%s\n",f.nome);
	printf("Idade:%d\n",f.idade);
	
	
}
