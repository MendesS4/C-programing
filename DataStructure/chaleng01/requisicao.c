#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Requisicao_ {
    char nome[41];
    int codigo;
    char procedimento[11];
};

struct Requisicao_* cria_requisicao(char nome[], int codigo, char procedimento[]) {

    //alocando espaco para requisicao
    //    tipo --------- variavel
    struct Requisicao_* requisicao = (struct Requisicao_ *) malloc(sizeof(struct Requisicao_));
    
    if(requisicao != NULL) {

        //retornando dados da requisicao
        strncpy(requisicao->nome, nome, 40);
        requisicao->nome[40] = '\0'; // ajuste para final de string
        requisicao->codigo = codigo;
        strncpy(requisicao->procedimento, procedimento, 10);
        requisicao->procedimento[10] = '\0';
    }
    
    return requisicao;
}

// Função para obter o nome de uma requisição
char* get_nome(struct Requisicao_* requisicao) {
    return requisicao->nome;
}

// Função para obter o código de inscrição de uma requisição
int* get_inscricao(struct Requisicao_* requisicao) {
    return requisicao->codigo;
}

// Função para obter o código do procedimento de uma requisição
char* get_procedimento(struct Requisicao_* requisicao){
    return requisicao->procedimento;
}

// Função para liberar a memória alocada para uma requisição
void libera(struct Requisicao_* requisicao) {
    free(requisicao);
}

//teste
// void print_requisicao(struct Requisicao_* requisicao){
//     printf("Nome: %s\nCodigo: %d\nProcedimento %s\n", requisicao->nome, requisicao->codigo, requisicao->procedimento);
// }

