/*
 * biblioteca.h
 *
 *  Created on: 25 de abr de 2018
 *      Author: n226908114
 */

#ifndef SRC_BIBLIOTECA_H_
#define SRC_BIBLIOTECA_H_

float somar(float, float);
float subtrair(float, float);
float multiplicar(float, float);
float dividir(float, float);
void getNum(float *a, float *b);

struct funcoes {
	float (*somar)(float,float);
	float (*subtrair)(float,float);
	float (*multiplicar)(float,float);
	float (*dividir)(float,float);
	float numero;
};

typedef struct funcoes fun;


#endif /* SRC_BIBLIOTECA_H_ */
