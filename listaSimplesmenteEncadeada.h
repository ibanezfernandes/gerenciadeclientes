typedef struct{
    Cliente cliente;
    int index;
    struct NodoLSE* proximo;
}NodoLSE;

typedef struct{
    NodoLSE* inicio;
}LSE;

LSE* criarLSE();
void destruirLSE(LSE** lista);
void inserirInicioLSE(LSE* lista, Cliente c);
void inserirFinalLSE(LSE* lista, Cliente c);
void imprimirDadosLSE(LSE* lista);
void removerLSE(LSE* lista, int cpf);
int tamanhoLSE(NodoLSE* lista);
int buscarLSE(LSE* lista, int cpf, Cliente* clienteEncontrado);
void imprimirCPFLSE(LSE* lista, int cpf);
/*
int buscarCPFLSE(LSE* lista, int cpf, Cliente* cpfEncontrado);
void mostrarPosicaoClienteLSE(LSE* lista);
void alterarClientePosicaoLSE(LSE* lista, Cliente c);*/
