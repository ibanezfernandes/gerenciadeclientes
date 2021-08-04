#include "cliente.h"
#include <stdio.h>
int gerarid(ListaCliente* listc) {
    int contadordeId;
    int i;

    printf("vamo ve: %s \n", &listc->dados->id);
    printf("vamo ve: %s \n", &listc->index);

    return contadordeId;

    /*for(i = 0; i<(int) sizeof listc; i++){
        if (i == (int) sizeof listc - 1){
            //listc->dados->id = contadordeId++;
            contadordeId = i + 1;
            printf("ID: %d \n", &contadordeId);

            return contadordeId;
        }
    }*/
}

Cliente novoCliente(Cliente c){
    printf("\nDigite o nome: ");
    scanf("%s%*[^\n]", &c.nome);
    printf("\nDigite o CPF: ");
    scanf("%d%*[^\n]", &c.cpf);
    gerarid(&c);

    printf("\n O QUE TU É %d \n ", &c);
    return c;
}

void imprimirDadosCliente(Cliente c){
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
	printf("CPF: %d\n\n", c.cpf);
}

