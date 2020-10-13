#include <stdio.h>
void troca(int i, int j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}

main()
{

	int i, j;
	printf("Digite o valor de i:");
	scanf("%d", &i);
	printf("Digite o valor de j:");
	scanf("%d", &j);

	troca(i, j);
	printf("Valor de i: %d\n", i);
	printf("Valor de j: %d\n", j);
}
