#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x = 23;
	int *px;
	px = &x;

	printf("\nCounteudo de x - %i - Endereco de x - %p\n",x,&x);
	
	printf("\nCounteudo de px - %p - Endereco de px - %p\n",px,&px);

	//Alteracao indeireta em x

	*px = 200;

	printf("\nConteudo de x - %i - Endereco de x - %p\n",x,&x);
}	
