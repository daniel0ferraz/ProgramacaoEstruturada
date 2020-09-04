#include<stdio.h>
#include<stdlib.h>
main() {
	int i;
	char nome[10];
	float media;
	float nota[5];
	
	for (i=0; i<5; i++){
		printf("Entre com a nota:");
		scanf("%f",&nota[i]);
	}
	
	media = nota[5] / 5;
	
   

   system("pause"); 
}


