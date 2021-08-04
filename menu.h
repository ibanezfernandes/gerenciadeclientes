#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "listaEstaticaSequencial.h"
#include "listaSimplesmenteEncadeada.h"
#include "listaDuplamenteEncadeada.h"

int menu(){
	Cliente c;

    LES* les_cliente;
    LES* cpfLes;
    LES* cpfEncontradoLES;

    LSE* lse_cliente;
    LSE* cpfEncontradoLSE;
    LSE* cpfLse;

    LDE* lde_cliente;

    int opcao;

    do{
        printf("\n--------------------------------------------------\n");
        printf("\nEscolha qual ED voce deseja manipular:\n");
        printf("\n0 - Exit\n1 - Lista Sequencial Encadeada\n2 - Lista Estatica Sequencial\n3 - Lista Duplamente Encadeada\n");
        printf("\nDigite a opcao:");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            printf("\n--------------------------------------------------\n");
            printf("\nVoce escolheu a Lista Sequencial Encadeada\n");
            printf("Escolha uma opcao abaixo:\n");
            printf("\n0 - Exit\n1 - Criar ED\n2 - Delete ED\n3 - New user end\n4 - New user start\n5 - New user in position\n6 - Find CPF\n7 - Delete for CPF\n8 - Show all users\n9 - List size\n10 - Show user date\n11 - User position in list\n12 - Change user data\n");
            int opcao1;
            printf("\nDigite a opcao:");
            scanf("%d", &opcao1);
            switch(opcao1){
            case 1:
                lse_cliente = criarLSE();
                break;
            case 2:
                destruirLSE(&lse_cliente);
                break;
            case 3:
                inserirFinalLSE(lse_cliente, c);
                break;
            case 4:
                inserirInicioLSE(lse_cliente, c);
                break;
            /*case 5:
                inserirDeterminadaPosicaoLSE(lse_cliente, c);
                break;
            case 6:
                buscarCPFLSE(lse_cliente, cpfLse, cpfEncontradoLSE);
                break;*/
            case 7:
                removerLSE(lse_cliente, cpfLse);
                break;
            case 8:
                imprimirDadosLSE(lse_cliente);
                break;
            /*case 9:
                tamanhoLSE(lse_cliente);
                break;*/
            case 10:
                imprimirCPFLSE(lse_cliente, cpfLse);
                break;
            /*case 11:
                void mostrarPosicaoClienteLSE(LSE* lista);
                break;
            case 12:
                void alterarClientePosicaoLSE(LSE* lista, Cliente c);
                break;*/
            default:
                printf("\nApenas as opcoes acimas sao aceitas, escolha uma por favor!\n");
            }
            break;
        case 2:
            printf("\n--------------------------------------------------\n");
            printf("\nVoce escolheu a Lista Estatica Sequencial\n");
            printf("Escolha uma opcao abaixo:\n");
            printf("\n0 - Exit\n1 - Criar ED\n2 - Delete ED\n3 - New user end\n4 - New user start\n5 - New user in position\n6 - Find CPF\n7 - Delete for CPF\n8 - Show all users\n9 - List size\n10 - Show user date\n11 - User position in list\n12 - Change user data\n");
            int opcao2;
            printf("\nDigite a opcao:");
            scanf("%d", &opcao2);
            switch(opcao2){
            case 1:
                les_cliente = criarLES();
                break;
            case 2:
                destruirLES(&les_cliente);
                break;
            case 3:
                inserirFinalLES(les_cliente, c);
                break;
            case 4:
                inserirInicioLES(les_cliente, c);
                break;
            case 5:
                inserirDeterminadaPosicaoLES(les_cliente, c);
                break;
            case 6:
                buscarCPFLES(les_cliente, cpfLes, cpfEncontradoLES);
                break;
            case 7:
                removerLES(les_cliente, cpfLes);
                break;
            case 8:
                imprimirDadosLES(les_cliente);
                break;
            case 9:
                tamanhoLES(les_cliente);
                break;
           case 10:
                imprimirCPFLES(les_cliente, cpfLes);
                break;
            case 11:
                mostrarPosicaoClienteLES(les_cliente);
                break;
            case 12:
                alterarClientePosicaoLES(les_cliente, c);
                break;
            default:
                printf("\nApenas as opcoes acimas sao aceitas, escolha uma por favor!\n");
            }
            break;
        case 3:
            printf("\n--------------------------------------------------\n");
            printf("\nVoce escolheu a Lista Duplamente Encadeada\n");
            printf("Escolha uma opcao abaixo:\n");
            printf("\n0 - Exit\n1 - Criar ED\n2 - Delete ED\n3 - New user end\n4 - New user start\n5 - New user in position\n6 - Find CPF\n7 - Delete for CPF\n8 - Show all users\n9 - List size\n10 - Show user date\n11 - User position in list\n12 - Change user data\n");
            int opcao3;
            printf("\nDigite a opcao:");
            scanf("%d", &opcao3);
            switch(opcao3){
            case 1:
                lde_cliente = criarLDE();
                printf("A Lista Duplamente Encadeada foi criada com sucesso!\n");
                break;
            case 2:
                destruirLDE(&lde_cliente);
                printf("A Lista foi destruida com sucesso!\n");
                break;
            /*case 3:
                void inserirFinalLDE(LDE* lista, Cliente c);
                break;*/
            case 4:
                inserirInicioLDE(lde_cliente, c);
                break;
            /*case 5:
                buscarClienteListaLDE(lde_cliente, 123, c);
                break;
            case 6:
                int buscarCPFLDE(LDE* lista, int cpf, Cliente* cpfEncontrado);
                break;
            case 7:
                void removerClienteLDE(LDE* lista, int cpf);
                break;*/
            case 8:
                imprimirDadosLDE(lde_cliente);
                break;
            /*case 9:
                int tamanhoLDE(LSE* lista);
                break;
            case 10:
                void imprimirCPFLDE(LDE* lista);
                break;
            case 11:
                void mostrarPosicaoClienteLDE(LDE* lista);
                break;
            case 12:
                void alterarClientePosicaoLDE(LDE* lista, Cliente c);
                break;*/
            default:
                printf("\nApenas as opcoes acimas sao aceitas, escolha uma por favor!\n");
            }
            break;
        default:
            printf("\nApenas as opcoes acimas sao aceitas, escolha uma por favor!\n");
        }
    }while(opcao != 0);
}
