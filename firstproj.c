#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {
	printf ("KAKAKAKAKAKAKAKAKAKA \nKAKAKAKAKAKA\n");
	int x;
	x = 10;
	printf ("%d\n", x);
	int a,b;
	printf ("Digite o valor de a : ");
	scanf ("%d",&a);
	printf ("Digite o valor de b : ");
	scanf ("%d",&b);
	printf ("%d\n",a/b);
	char string [100];
	printf ("Digite qualquer coisa : ");
	scanf ("%s",string);
	printf ("A entrada foi : %s\n",string);
	char anotherone [100] = "Mattar";
	printf ("Concatenando : %s %s\n",string,anotherone);

	return 0;
}