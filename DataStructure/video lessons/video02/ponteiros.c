#include <stdio.h>
#include <stdlib.h>

int main(){
    int tipo_simples;
    int *ponteiro; //(*) indica ponteiro

    //ambas variaveis contem lixo pois nao foram inicializadas
    printf("tipo simples -> endereco: %p, valor: %d\n", &tipo_simples, tipo_simples); // (&) indica endereco em memoria
    printf("ponteiro     -> endereco: %p, valor: %p\n\n", &ponteiro, ponteiro); 

    tipo_simples = 10;
    ponteiro = &tipo_simples;
    printf("Atribuido o endereco de tipo_simples para ponteiro. Atribuido 10 a tipo simples.\n");
    printf("tipo simples -> endereco: %p, valor: %d\n", &tipo_simples, tipo_simples);
    printf("ponteiro     -> endereco: %p, valor %p, indirecao: %d\n\n", &ponteiro, ponteiro, *ponteiro);


    ponteiro = (int *) malloc(sizeof(int));
    if(!ponteiro) return 1;
    printf("Alocado espaco para ponteiro.\n");
    printf("tipo simples -> endereco: %p, valor %d\n", &tipo_simples, tipo_simples);
    printf("ponteiro    -> endereco %p, valor: %p, indirecao %d\n\n", &ponteiro, ponteiro, *ponteiro);

    *ponteiro = 100;
    printf("Atributo 100 ao endereco onde ponteiro aponta.\n");
    printf("ponteiro -> endereco: %p, valor: %p, indirecao: %d\n", &ponteiro, ponteiro, *ponteiro);
    return 0;

}