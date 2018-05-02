/*
 * funcoes.c
 *
 *  Created on: 2 de mai de 2018
 *      Author: n226908114
 */

#include "biblioteca.h"
#include <stdlib.h>
#include <stdio.h>

f* criaVetor() {

	f *fu = (f *) malloc (C * sizeof(f));
	return fu;

}

void getNome(char *c) {
	printf("\nDigite o nome do funcionario:");
	fflush(stdin);
	gets(c);
}

void getSalario(float *f) {
	printf("\nDigite o salario do funcionario:");
	fflush(stdin);
	scanf("%f",f);
}

void getConvenio(char *c) {
	printf("\nDigite o convenio do funcionario:");
	fflush(stdin);
	scanf("%c",c);
}

f* preencheFunc(f *f) {

	int x = 0;
	do {
		getNome(f[x].nome);
		getSalario(&f[x].salario);
		getConvenio(&f[x].convenio);
		x++;
	}while(x != C);

	return f;
}

void imprimeFunc(f *f) {
	int x = 0;
	do {
		printf("\nNome do %d funcionario: %s",x+1,f[x].nome);
		printf("\nSalario do %d funcionario: %f",x+1,f[x].salario);
		printf("\nConvenio do %d funcionario: %c",x+1,f[x].convenio);
		x++;

	}while(x != C);
}

