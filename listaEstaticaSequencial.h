typedef struct{
    int index;
    Cliente dados[100];
}LES;

LES* criarLES();
void destruirLES(LES** lista);
void inserirInicioLES(LES* lista, Cliente c);
void inserirFinalLES(LES* lista, Cliente c);
int inserirDeterminadaPosicaoLES(LES* lista, Cliente c);
void removerLES(LES* lista, int cpf);
void imprimirDadosLES(LES* lista);
int tamanhoLES(LES* lista);
void imprimirCPFLES(LES* lista, int cpf);
int buscarCPFLES(LES* lista, int cpf, Cliente* cpfEncontrado);
void mostrarPosicaoClienteLES(LES* lista);
int alterarClientePosicaoLES(LES* lista, Cliente c);
