typedef struct{
    Cliente cliente;
    struct NodoLDE* proximo;
    struct NodoLDE* anterior;
}NodoLDE;

typedef struct{
    NodoLDE* inicio;
}LDE;

LDE* criarLDE();
void destruirLDE(LDE** lista);
void inserirInicioLDE(LDE* lista, Cliente c);
void imprimirDadosLDE(LDE* lista);
/*void inserirFinalLDE(LDE* lista, Cliente c);
int buscarClienteListaLDE(LDE* lista, int cpf, Cliente* clienteEncontrado);
void removerClienteLDE(LDE* lista, int cpf);
int tamanhoLDE(LDE* lista);
void imprimirCPFLDE(LDE* lista);
int buscarCPFLDE(LDE* lista, int cpf, Cliente* cpfEncontrado);
void mostrarPosicaoClienteLDE(LDE* lista);
void alterarClientePosicaoLDE(LDE* lista, Cliente c);*/
