//first step - compile  (1 gcc -E compile.c)
#include <stdio.h>
#define QUANTIDADE 20

int main(){
    printf("Imprimindo de 1 a %d\n\n", QUANTIDADE);

    int i;
    for(i = 1; i <= QUANTIDADE; i++){
        printf("--> %d\n", i);
    }
    return 0;
}

//step 2 - compiled to asembly