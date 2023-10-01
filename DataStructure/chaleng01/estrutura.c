#include <stdio.h>
#include <stdlib.h>
#include "requisicao.h"
#include "estrutura.h"

// Definição da estrutura de dados Estrutura
struct Estrutura_ {
    Requisicao **fila;
    int capacidade;
    int tamanho;
    int frente;
    int fim;
};

// Função para criar uma nova estrutura
struct Estrutura_* create(int capacidade) {
    struct Estrutura_* estrutura = (Estrutura *)malloc(sizeof(Estrutura));
    if (estrutura == NULL) {
        perror("Erro ao alocar memória para Estrutura");
        exit(EXIT_FAILURE);
    }

    estrutura->fila = (Requisicao **)malloc(capacidade * sizeof(Requisicao *));
    if (estrutura->fila == NULL) {
        perror("Erro ao alocar memória para fila");
        free(estrutura);
        exit(EXIT_FAILURE);
    }

    estrutura->capacidade = capacidade;
    estrutura->tamanho = 0;
    estrutura->frente = 0;
    estrutura->fim = -1;

    return estrutura;
}

// Função para inserir uma requisição na estrutura
void inserir(Estrutura *estrutura, Requisicao *requisicao) {
    if (estrutura->tamanho < estrutura->capacidade) {
        estrutura->fim = (estrutura->fim + 1) % estrutura->capacidade;
        estrutura->fila[estrutura->fim] = requisicao;
        estrutura->tamanho++;
    } else {
        printf("Estrutura cheia, impossível inserir.\n");
    }
}

// Função para remover e retornar uma requisição da estrutura
Requisicao *remover(Estrutura *estrutura) {
    if (estrutura->tamanho > 0) {
        Requisicao *requisicao = estrutura->fila[estrutura->frente];
        estrutura->frente = (estrutura->frente + 1) % estrutura->capacidade;
        estrutura->tamanho--;
        return requisicao;
    } else {
        printf("Estrutura vazia, impossível remover.\n");
        return NULL;
    }
}

// Função para obter a quantidade de requisições em espera na estrutura
int get_size(const Estrutura *estrutura) {
    return estrutura->tamanho;
}

// Função para liberar a memória alocada para a estrutura
void destroy(Estrutura *estrutura) {
    free(estrutura->fila);
    free(estrutura);
}
