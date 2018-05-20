#include <stdio.h>
#include <stdlib.h>

int main () {

	int *p,*b;

	int tamanho,soma = 0;

	do {
		printf("Digite o tamanho do vetor : \n");
		scanf("%d",&tamanho);
		if (tamanho <= 0) {
			printf("Digite um valor positivo ! \n");
		}
	}while(tamanho <= 0);


	p = (int *) malloc(tamanho * sizeof(int));

	b = p;

	for (int z = 0; z < tamanho ; z++) {

		printf("Digite o valor da posicao %d do vetor : \n",z);
		scanf("%d",p);
		if(z%2 == 0) {
			*p = *p*2;
		}else if (z%2 != 0) {
			*p = *p/2;
		}
		soma = soma + *p;
		p++;

	}

	for (int z = 0 ; z < tamanho ; z++) {
		printf("p[%d] = %d\n",z,*b);
		b++;	
	}



	printf("\n");
	printf("Soma dos itens do vetor : %d\n",soma);
	printf("\n");
	// free(p); - dando error


}