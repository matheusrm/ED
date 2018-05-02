/*
 * biblioteca.h
 *
 *  Created on: 2 de mai de 2018
 *      Author: n226908114
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#define C 5
#define mult(a,b) (a*b)

struct f {
	char nome[50];
	float salario;
	char convenio;
};
typedef struct f f;
f* criaVetor();
void getNome(char *c);
void getSalario(float *f);
void getConvenio(char *c);
f* preencheFunc(f *f);
void imprimeFunc(f *f);

#endif /* BIBLIOTECA_H_ */
