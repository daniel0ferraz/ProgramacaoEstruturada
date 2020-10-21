#include <stdio.h>intresultado(int);
main(){
int n;
printf("Entre com o numero desejado: ");
scanf("%d", &n);
printf("%d ! = %d\n", n, resultado (n));

}
int resultado(int num)
{
	if(num > 1)
	  return(num*resultado(num-1));
	else 
	  return(1);
}

