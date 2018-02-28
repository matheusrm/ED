#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {

	char opcao;
	float parcelas;
	float resultado = 0;
	float n;
// finished now
	printf ("         \n             MENU                    \n");
	printf ("\n");
	printf ("a) 1+0 + 2+1 + 3+2 + 4+3 \n");
	printf ("   ___   ___   ___   ___   + ... ");
	printf ("\n    1     4     9     16\n");
	printf ("\n");
	printf ("b) 1 + 8 + 27 + 64 \n");
	printf ("   _   __  ___  ____ + ...\n");
	printf ("   1   10  100  1000 \n");
	printf ("\n");
	printf ("c) 1 + 2 + 3 + 4  \n");
	printf ("  ___ ___ ___ ___  + ...\n");
	printf ("  3x2 3x4 3x6 3x8 \n");
	printf ("\n");
	printf ("d) FINALIZAR \n");
	printf ("\n");

	//
	void flush_in(){ 
    	int ch;
    	while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
 	}


	while (opcao != 'S') {
		flush_in();
		printf ("Selecione a opcao desejada, 'S' para sair : \n");
		scanf ("%c",&opcao);
		
		switch (opcao) {

			case ('a'):
				
				memset(&resultado, 0, sizeof(float));
				printf ("Quantas parcelas deseja somar ? \n");
				scanf ("%f",&n);
				
				while (n > 0) {

					resultado = resultado + ((n+(n-1))/(n*n));
					n--;
				}
				printf ("O resultado e : %.2f \n",resultado);
				break;
		

			case ('b'):
				memset(&resultado, 0, sizeof(float));
				printf ("Quantas parcelas deseja somar ? \n");
				scanf ("%f",&n);

				while (n > 0) {

					resultado = resultado + pow(n,3)/(pow(10,n-1));
					n--;
				}
				printf("O resultado e : %.2f \n",resultado);
				break;

			case ('c'):
				memset(&resultado, 0, sizeof(float));		
				printf("Quantas parcelas deseja somar ? \n");
				scanf ("%f",&n);

				for (n ; n > 0 ; n--) {
					
					resultado = resultado + n/(n*6);
				}

				printf("O resultado e : %.2f \n",resultado);
				break;
			
		}
	}





}
