#include<stdio.h>
main(){
       char palavra[30];
       printf ("\n Informe uma Palavra: ");
       gets (palavra);
       printf ("A palavra digitada e %s\n", palavra);
       printf ("\nA segunda letra da string digitada e %c", palavra[1]);
       printf ("\n Informe uma segunda Palavra: ");
       gets (palavra);
       printf ("A palavra digitada e %s\n", palavra);
       printf ("\nA segunda letra da string digitada e %c\n", palavra[1]);
                
}
