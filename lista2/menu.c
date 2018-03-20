#include <stdlib.h>
#include <stdio.h>
#include <string.h>	

void menu();
int numero();
int positive();
void verificarTriangulo(float lado1, float lado2, float lado3, char *tipoTriangulo);
void tabuada(int numero,int *vet);

int main () {
	
	float lado1, lado2, lado3;
	char *type;
	int *vet;
	int numero;
	vet = (int *) malloc(10 * sizeof(int));
	type = (char *) malloc(sizeof(char));
	lado1 = positive();
	lado2 = positive();
	lado3 = positive();
	verificarTriangulo(lado1,lado2,lado3,type);
	printf("O triangulo é do tipo : %c\n", *type);
	numero = positive();
	tabuada(numero,vet);
	for (int i = 0; i <= 10 ; i++) {
		printf("Valor %d : %d\n",i,*vet);
		vet++;
	}




}

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}


void menu() {

	char opcao;

	do {	
		printf("A - Resultado do exercicio 04 \n");
		printf("B - Resultado do exercicio 06 \n");
		printf("C - Finalizar \n");
		printf("Digite uma opcao : \n");
		scanf("%c",&opcao);
		if (opcao == 'a' || opcao == 'A') {
			printf("Exibir resultado da questao 04\n");
		}else if(opcao == 'b' || opcao == 'B') {
			printf("Exibir resultado da questao 06\n");
		}else if (opcao == 'c' || opcao == 'C') {
			printf("Programa finalizado ! \n");
			break;
		}else {
			printf("Valor invalido. Digite novamente !! \n");
			continue;
		}
		flush_in();
	}while(opcao != 'a' && opcao != 'b' && opcao != 'c');
}

int numero() {

	int num;
	
	do{
		printf("Digite um numero inteiro de 0 a 10 \n");
		scanf("%d",&num);
	}while(num < 0 || num > 10);
	
	return num;
}

int positive() {
	int numero;
	do {
		printf("Digite um numero real, positivo :\n");
		scanf("%d",&numero);
	}while(numero <= 0);
	printf("Numero digitado %d\n",numero);

	return numero;

}

void verificarTriangulo(float lado1, float lado2, float lado3, char *tipoTriangulo) {

	if (lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado3 + lado2 < lado1) {
		*tipoTriangulo = 'N';
	}else if (lado1 == lado2 && lado1 == lado3) {
		*tipoTriangulo = 'E';
	}else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		*tipoTriangulo = 'I';
	}else {
		*tipoTriangulo = 'S';
	}

}

void tabuada(int numero,int *vet) {

	for (int i = 0 ; i <= 10 ; i++) {
		*vet = numero*i;
		vet++;
	}
}