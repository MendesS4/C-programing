#include <stdio.h>

int global = 100;

void funcao(){
    printf("Na funcao, endereco: %p, valor: %d\n", &global, global);
}

int main (){
    printf("No main antes da declaracao, endereco: %p, valor: %d\n", &global, global);
    int global = 200;
    printf("No main depois da declaracao, endereco : %p, valor: %d\n", &global, global);
    int i = 1;
    while(i > 0){
        i--;
        printf("No while antes da declaracao, endereco: %p, valor: %d\n", &global, global);
        int global = 300;
        printf("No while depois da declaracao, endereco : %p, valor: %d\n", &global, global);
    }
    funcao();
}