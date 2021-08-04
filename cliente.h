typedef struct{
    char nome[100];
    int id;
    int cpf;
}Cliente;

typedef struct{
    int index;
    Cliente dados[100];
}ListaCliente;

void imprimirDadosCliente(Cliente c);
int gerarid(ListaCliente* listc);
Cliente novoCliente(Cliente c);
