#include<stdio.h>
#include<stdlib.h>
	int calc_produto(int, int);
	main()
	{
		int seguir;
		int oper1, oper2, produto;
		
		do 
		  {
		  	printf("\nOperando1");
		  	scanf("%d",&oper1);
		  	printf("\nOperando2");
		  	scanf("%d",&oper2);
		  	
		  	printf("\nProduto = %d\n", calc_produto(oper1, oper2));
		  	printf("\nPara contunuar, digite 1, para parar, digite 0");
		  	scanf("%d",&seguir);
		  }
		while(seguir);
		system("pause");
	}
	
	int calc_produto(int valor1, int valor2)
	{
	   return valor1 * valor2;
	}
