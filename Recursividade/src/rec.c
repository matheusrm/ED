#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex(int a);
int f(int a,int b,int res);
void tabuada(int x, int y);
void serie(int param, double *res);
float serieCauda(int param, float res);
void vetorCauda(int posicoes, int *vetor);
int produtoVetorCauda(int posicoes, int *vetorr, int produto);

int main() {
	setbuf(stdout, NULL);
	int vet[3];
	vetorCauda(3,vet); // o nome do vetor traz o endereco de memoria da primeira posicao
	int prod = produtoVetorCauda(3,vet,1);
	int x = 0;
	while(x < 3) {
		printf("\n%d",vet[x]);
		x++;
	}
	printf("\n%d",prod);
	return 0;
}

void ex(int a) {
	if(a == 0) {
		printf("end");
		return;
	}else {
		printf("%d\n",a);
	}
	ex(a-1);
}

int f(int a,int b,int res) {
	if(b == 0) {
		return res;
	}else {
		return f(a,b-1,res+a);
	}
}
//3 + (3 + (3 + (3 + (0)))
void tabuada(int x,int y) {
	if(y == 0) {
		printf("\n%d * %d = %d",x,y,x*y);
		return;
	}
	printf("\n%d * %d = %d",x,y,x*y);
	tabuada(x,y-1);
}

void serie(int param,double *res) {
	if(param == 0) {
		return;
	}else {
		*res += (pow(param,3))/pow(10,param-1);
		serie(param-1,res);
	}
}
float serieCauda(int param, float res) {
	if(param == 0) {
		return res;
	}else {
		return serieCauda(param-1, (pow(param,3))/pow(10,param-1) + res);
	}
}

void vetorCauda(int posicoes, int *vetor) {
	if(posicoes == 1) {
		*vetor = rand() % 100;
	}else {
		*vetor = rand() % 100;
		return vetorCauda(posicoes - 1, ++vetor);
	}
}

int produtoVetorCauda(int posicoes, int *vetorr, int produto) {
	if(posicoes == 0) {
		return produto;
	}else {
		return produtoVetorCauda(posicoes-1,vetorr+1,produto * (*vetorr));
		//vetorr++;
	}
}
