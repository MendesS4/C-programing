//arquivo para teste.c entender as funcoes de estrutura.o

typedef struct Estrutura_ Estrutura; //simplificando nome

// Função para criar uma nova estrutura
Estrutura *create();

// Função para inserir uma requisição na estrutura
void inserir(Estrutura *estrutura, Requisicao *requisicao);

// Função para remover e retornar uma requisição da estrutura
Requisicao *remover(Estrutura *estrutura);

// Função para obter a quantidade de requisições em espera na estrutura
int get_size(const Estrutura *estrutura);

// Função para liberar a memória alocada para a estrutura
void destroy(Estrutura *estrutura);
