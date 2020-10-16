#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main( ){
    char re[80];
    printf ("Digite a senha: ");
    scanf ("%s", &re);   
    if (strcmp(re,"laranja")==0) {
        printf ("Senha correta\n");
    }    
    else {
        printf ("Senha invalida\n");
    }    
    system("pause");
}


