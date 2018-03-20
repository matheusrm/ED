#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {

	float pao,broa,somaPao = 0,somaBroa = 0,somaTotal = 0;
	int x = 0;
	char verif;
	char v;

	while (x == 0) {

		printf ("Para cadastrar paes tecle 'P' , para broas tecle 'B' , 'S' para sair ");
		setbuf(stdin,NULL);
		scanf("%c",&verif);

		if (verif == 'S') {
			x = 1;
			break;
		}

		else if (verif == 'P') {

			printf ("Digite a quantidade de paes vendidos :  (0 para sair) ");
			scanf ("%f",&pao);
			if (pao > 0) {	
				somaPao = somaPao + 0.62*pao;
			}
			if (pao == 0) {
				break;
			}
		}

		else if (verif == 'B') {
			printf ("Digite a quantidade de broas vendidas : (0 para sair) ");
			scanf ("%f",&broa);
			if (broa > 0) {
				somaBroa = somaBroa + 2.90*broa;
			}
			if (broa == 0) {
				break;
			}

			
		}

		somaTotal = somaTotal + somaPao + somaBroa;

	}

	printf ("O valor arrecadado total e de %f : ",somaTotal);
	printf ("\nO valor a ser guardado na conta poupanca e de %f ! \n",somaTotal*0.3);


}