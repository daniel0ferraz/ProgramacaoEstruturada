#include <stdio.h>
#include<stdlib.h>
/*Aluno: Daniel Ferraz Coelho | T145
  Matricula: 2020100646
*/
main()
{
	int v[10], par[10], impar[10];
	int ip = 0, ii = 0, i;

	for (i = 0; i < 10; i++)
	{
		printf("Digite um numero %d\n",i+1);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (v[i] % 2 == 0)
		{
			par[ip] = v[i];
			ip++;
		}
		else
		{
			impar[ii] = v[i];
			ii++;
		}
	}
	for (i = 0; i < ip; i++)
		printf("Par: %d\n", par[i]);
	for (i = 0; i < ii; i++)
		printf("Impar: %d\n", impar[i]);
}

