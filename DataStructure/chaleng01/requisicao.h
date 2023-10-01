//arquivo para teste.c entender as funcoes de requisicao.o

typedef struct Requisicao_ Requisicao; //simplificando nome

// Função para criar uma nova estrutura
struct Requisicao_* cria_requisicao(char nome[], int codigo, char procedimento[]);

// Função para leitura de nome de paciente
char* get_nome(struct Requisicao_* requisicao);

//funcao para leitura de inscricao de paciente
int* get_inscricao(struct Requisicao_* requisicao);

//funcao para leitura de procedimento
char* get_procedimento(struct Requisicao_* requisicao);

void libera(struct Requisicao *requisicao);
