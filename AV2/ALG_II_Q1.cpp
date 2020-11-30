#include <stdio.h>
#include <stdlib.h>

main(){
    int vet[10] = {9, 10, 2, 6, 7, 4, 3, 5, 1, 8}, ind[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i = 1; i <= 10; i++) {
        printf("%i-", vet[ind[10 - i] - 1]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%i-", ind[10 - vet[i]]);
    }
}




