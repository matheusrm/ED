#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	int op;
	float a,b;
	/*
	float (*pfunc)(float,float);
	pfunc = somar;
	printf("%f", pfunc(3,2));
	*/
	fun fun;
	fun.somar = somar;
	fun.subtrair = subtrair;
	fun.multiplicar = multiplicar;
	fun.dividir = dividir;
	fun.numero = 20;
	printf("%f",fun.numero);
	do {
		printf("\nCalculadora\n");
		printf("1 - SOMAR\n");
		printf("2 - SUBTRAIR\n");
		printf("3 - MULTIPLICAR\n");
		printf("4 - DIVIDIR\n");
		printf("5 - SAIR\n");
		printf("\nDigite uma opcao: \n");
		scanf("%d",&op);

		if(op != 1 && op != 2 && op != 3 && op != 4) {
			printf("\nOpcao invalida\n");
		}
		if(op == 1) {
			fflush(stdin);
			getNum(&a,&b);
			printf("\n");
			printf("Resultado: %f",fun.somar(a,b));
			break;
		}else if(op == 2) {
			fflush(stdin);
			getNum(&a,&b);
			printf("\n");
			printf("Resultado: %f",fun.subtrair(a,b));
			break;
		}else if(op == 3) {
			fflush(stdin);
			getNum(&a,&b);
			printf("\n");
			printf("Resultado: %f",fun.multiplicar(a,b));
			break;
		}else if (op == 4) {
			fflush(stdin);
			getNum(&a,&b);
			printf("\n");
			printf("Resultado: %f",fun.dividir(a,b));
			break;
		}else {
			break;
		}

	}while(op != 1 && op != 2 && op != 3 && op != 4);

	return 0;
}

