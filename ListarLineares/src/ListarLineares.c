/*
 ============================================================================
 Name        : ListarLineares.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct dados {
	char 	nome[30];
	int 	codigo;
	struct dados *prox; //este ponteiro apontará para uma nova struct do tipo dados
};

typedef struct dados dados;

int main(void) {

	setbuf(stdout, NULL);
	dados *lista = NULL;
	lista = inserirNoInicio("Igor", 21, lista);
	return EXIT_SUCCESS;
}

dados* inserirNoInicio(char *nome, int codigo, dados *lista) {
	dados *novo = (dados *) malloc (sizeof(dados)); //criar espaco de memoria
	novo->codigo = codigo; //preencher dados da struct
	strcpy(novo->nome, nome);
	novo->prox = lista;
	return novo;
}

dados* inserirPeloFim(char *nome, int codigo, dados *lista) {
	dados *novo = (dados *) malloc (sizeof(dados));
	novo->codigo = codigo;
	strcpy(novo->nome,nome);
	novo->prox = NULL; //todo novo registro aponta para null

	//Conectar o endereco à lista
	//criar um ponteiro temporario
	if(lista == NULL) {
		return novo;
	}else {
		dados *tmp = lista;
		while(tmp->prox != NULL) {
			tmp = tmp->prox;
		}
		tmp->prox = novo;
		return lista;
	}
}
