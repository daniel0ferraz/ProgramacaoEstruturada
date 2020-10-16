#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    char re[80];
    printf ("Digite a palavra: ");
    scanf ("%s", &re);
    int size=strlen(re);
    printf ("Esta palavra tem %d caracteres.\n", size);
    system("pause");
}

