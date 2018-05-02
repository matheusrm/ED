/*
 ============================================================================
 Name        : aula020520182.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
//#include "funcoes.c"

int main(void) {
	setbuf(stdout, NULL);
	f *fu = criaVetor();
	preencheFunc(fu);
	imprimeFunc(fu);
	return 0;
}
