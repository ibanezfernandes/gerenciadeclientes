#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "listaEstaticaSequencial.h"

LES* criarLES()
{
    LES* li;
    li = (LES*) malloc(sizeof(LES));
    if(li != NULL)
    {
        li->index = 0;
    }
    printf("A Lista Estatica Sequencial foi criada com sucesso!\n");
    return li;
}


void destruirLES(LES** li)
{
    free(*li);
    *li = NULL;
    printf("A Lista foi destruida com sucesso!\n");
}

void inserirFinalLES(LES* lista, Cliente c)
{
    if(lista == NULL)
    {
        return 0;
    }
    lista->dados[lista->index] = novoCliente(c);
    lista->index++;

    printf("Cliente foi inserido no final da lista com sucesso!\n");
    return 1;
    //controlar se lista cheia!
}


//Verificar pois está removendo ao invés de adicionar
void inserirInicioLES(LES* lista, Cliente c){
    if(lista == NULL)
    {
        return 0;
    }
    lista->dados[lista->index] = novoCliente(c);
    lista->index--;

    printf("Cliente foi inserido no inicio da lista com sucesso!\n");
    return 1;
}

//Verificar pois não está correto
int inserirDeterminadaPosicaoLES(LES* lista, Cliente c)
{
    printf("Qual posição da lista deseja adicionar o cliente: ");
    int posicao;
    scanf("%d", &posicao);
    int i;
    for(i=0;i<lista->index; i++)
    {
        if(lista->index == posicao)
        {
            inserirFinalLES(lista, c);
        }
    }
    return 0;
}

int buscarCPFLES(LES* lista, int cpf, Cliente* cpfEncontrado){
    printf("\nDigite um CPF para encontrar: ");
    scanf("%d", &cpfEncontrado);
    int i;
    for(i=0;i<lista->index; i++)
    {
        if(lista->dados[i].cpf == cpfEncontrado)
        {
            imprimirDadosCliente(lista->dados[i]);
        }
    }
}

void removerLES(LES* lista, int cpfr){
    printf("\nQual CPF deseja remover: ");
    scanf("%d", &cpfr);
    printf("Removendo cliente com CPF: %d\n", cpfr);
    int i;
    for(i=0;i<lista->index; i++)
    {
        if(lista->dados[i].cpf == cpfr)
        {
            lista->dados[i] = lista->dados[lista->index-1];
            printf("i=%d index=%d\n", i, lista->index);
            lista->index--;
            return 1;
        }
    }
    return 0;
}

void imprimirDadosLES(LES* lista){
    if(lista != NULL)
    {
        printf("Clientes cadastrados:\n\n");
        int i;
        for(i=0;i<lista->index; i++)
        {
            imprimirDadosCliente(lista->dados[i]);
        }
    }
    else
    {
        printf("Nao ha nenhum dado!");
    }
}
int tamanhoLES(LES* lista){
    int tam;
    tam = lista->index;
    printf("Tamanho da lista: %d\n", &tam);
    return tam;
}

void imprimirCPFLES(LES* lista, int cpfe){
    if(lista != NULL)
    {
        printf("\nDigite o CPF para localizar o cliente: ");
        scanf("%d", &cpfe);
        int i;
        for(i=0;i<lista->index; i++)
        {
            if(lista->dados[i].cpf == cpfe)
            {
                imprimirDadosCliente(lista->dados[i]);
            }
        }
    }
    else
    {
        printf("Nao ha nenhum dado!");
    }
}

void mostrarPosicaoClienteLES(LES* lista){
    int i;
    for(i=0;i<lista->index; i++){
        printf("Posicao do cliente: %d\n", &lista->index);
        imprimirDadosCliente(lista->dados[i]);
    }
}
int alterarClientePosicaoLES(LES* lista, Cliente c){
    printf("Digite a posicao do cliente que deseja alterar: ");
    int posicao;
    scanf("%d", &posicao);
    int i;
    for(i=0;i<lista->index; i++)
    {
        if(lista->index == posicao)
        {
            lista->dados[lista->index] = novoCliente(c);
            return 1;
        }
    }
    return 0;
}


