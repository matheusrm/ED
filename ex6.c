#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {

	float salario,novoSalario;

	printf("Digite o seu salario : \n");
	scanf("%f",&salario);

	novoSalario = salario > 5000 ? salario*1.1 : salario*1.15;

	printf ("Salario corrigido : %.2f \n",novoSalario);

}