#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"
#include "listaSimplesmenteEncadeada.h"

LSE* criarLSE()
{
    LSE* li;
    li = (LSE*) malloc(sizeof(LSE));
    if(li != NULL)
    {
        li->inicio = NULL;
    }

    printf("A Lista Simplesmente Encadeada foi criada com sucesso!\n");
    return li;
}

void destruirLSE(LSE** lista)
{
    if(*lista != NULL)
    {
        NodoLSE* nodo;
        while((*lista)->inicio != NULL)
        {
            nodo = (*lista)->inicio;
            (*lista)->inicio = nodo->proximo;
            free(nodo);
        }
        (*lista)->inicio = NULL;
        free(*lista);
    }

    *lista = NULL;

    printf("A Lista foi destruida com sucesso!\n");
}


void inserirInicioLSE(LSE* lista, Cliente c)
{
    NodoLSE* novo = (NodoLSE*)malloc(sizeof(NodoLSE));
    novo->cliente = novoCliente(c);
    novo->proximo = lista->inicio;
    lista->inicio = novo;

    printf("Cliente foi inserido no inicio da lista com sucesso!\n");
}

//verificar porque nao funciona
void inserirFinalLSE(LSE* lista, Cliente c){
    NodoLSE* novo = (NodoLSE*)malloc(sizeof(NodoLSE));
    novo->cliente = novoCliente(c);
    novo->proximo = lista;
    lista = novo;

    printf("Cliente foi inserido no final da lista com sucesso!\n");
}

int buscarLSE(LSE* lista, int cpf, Cliente* clienteEncontrado)
{
    printf("\nDigite o CPF do cliente que deseja: ");
    scanf("%d", &cpf);
    if(lista != NULL){
        NodoLSE* auxAnterior;
        NodoLSE* aux = lista->inicio;
        while(aux != NULL && aux->cliente.cpf != cpf){
            auxAnterior = aux;
            aux = aux->proximo;
        }
        if(aux == NULL){
            printf("Erro: Cliente nao encontrado\n");
        }
        if(aux->cliente.cpf == cpf){
            imprimirDadosLSE(lista);
        }
        else{
            auxAnterior->proximo = aux->proximo;
        }
    }
    else{
        printf("Erro: Lista nao inicializada\n");
    }

    return 0;
}

void removerLSE(LSE* lista, int cpf)
{
    NodoLSE* aux2;
    NodoLSE* aux = lista->inicio;
    if(lista != NULL){
        printf("\nQual CPF deseja remover: ");
        scanf("%d", &cpf);
        printf("Removendo cliente com CPF: %d\n", cpf);
        int i;
        for(i=0;i<aux->index; i++)
        {
            if(aux2->cliente.cpf == cpf)
            {
                aux->index = aux->index-1;
                printf("i=%d index=%d\n", i, aux->index);
                aux->index--;
                return 1;
            }
        }
        return 0;
    }
    else{
        printf("Erro: Cliente nao encontrado\n");
    }
}
void imprimirDadosLSE(LSE* lista)
{
    if(lista != NULL)
    {
        if(lista->inicio == NULL)
        {
            printf("Erro, lista nao foi inicilizada");
        }
        printf("Clientes cadastrados:\n\n");
        NodoLSE* aux = lista->inicio;
        while(aux!=NULL)
        {
            imprimirDadosCliente(aux->cliente);
            aux = aux->proximo;
        }
    }
    else
    {
        printf("Nao ha nenhum dado!");
    }
    printf("\n\n");
}

/*int tamanhoLSE(LSE* lista){
    int tam;
    tam = NodoLSE->index;
    printf("Tamanho da lista: %d\n", &tam);
    return tam;
}*/

void imprimirCPFLSE(LSE* lista, int cpf){
    if(lista != NULL)
    {
        if(lista->inicio == NULL)
        {
            printf("Erro, lista nao foi inicilizada");
        }
        printf("Digite o cpf para imprimir o cliente: ");
        scanf("%d", &cpf);
        NodoLSE* aux = lista->inicio;
        if(aux!=NULL && aux->cliente.cpf == cpf){
            imprimirDadosCliente(aux->cliente);
            aux = aux->proximo;
        }
    }
    else
    {
        printf("Nao ha nenhum dado!");
    }
    printf("\n");
}
// implementar

// int buscarCPFLSE(LSE* lista, int cpf, Cliente* cpfEncontrado)
// void mostrarPosicaoClienteLSE(LSE* lista)
// void alterarClientePosicaoLSE(LSE* lista, Cliente c);
