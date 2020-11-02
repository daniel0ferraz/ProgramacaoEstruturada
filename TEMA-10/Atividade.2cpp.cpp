#include <stdio.h>
#include <string.h>

main()
{
	FILE *p;
	char c, str[30], frase[80] = "Quantidade de caractere: ";
	int i;

	printf("Entre com um nome:");
	gets(str);

	if (!(p = fopen(str,"w"))) {
  	  printf("Erro! Impossivel abrir o arquivo!");
  	}
  	
	strcat(frase, str);
	for (i=0; frase[i]; i++)
	  putc(frase[i],p);
	fclose(p);

	p = fopen(str,"r");
	while (!feof(p))
 	{
  		c = getc(p);
  		printf("%c",c); 
  	}
	fclose(p);
}

