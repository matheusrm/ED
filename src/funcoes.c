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

void getSalario(float *fa, char* cu) {
	printf("\nDigite o salario do funcionario %s :", cu);
	fflush(stdin);
	scanf("%f",fa);
}

void getConvenio(char *c, char* cu) {
	do {
		printf("\nDigite o convenio do funcionario %s: ", cu);
		fflush(stdin);
		scanf("%c",c);
	}while(*c != 'S' && *c != 'N');
}

f* preencheFunc(f *f) {

	int x = 0;
	do {
		getNome(f[x].nome);
		getSalario(&f[x].salario, f[x].nome);
		f[x].salario = calculaNovoSalario(f[x].salario);
		getConvenio(&f[x].convenio, f[x].nome);
		x++;
	}while(x != C);

	return f;
}

void imprimeFunc(f *f) {
	int x = 0;
	do {
		printf("\nNome do %d(nd) funcionario: %s",x+1,f[x].nome);
		printf("\nSalario do %d(nd) funcionario: %f",x+1,f[x].salario);
		printf("\nConvenio do %d(nd) funcionario: %c",x+1,f[x].convenio);
		x++;

	}while(x != C);
}

double calculaNovoSalario(double salario) {
	if (salario <= 2000) {
		return mult(salario,1.15);
	}else if (salario <= 7500) {
		return salario + mult(salario,0.1);
	}else {
		return mult(salario,1.05);
	}
}

