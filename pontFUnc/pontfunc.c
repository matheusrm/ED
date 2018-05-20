#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	int (*pfunc)(int, int);
	pfunc = somar;

	return 0;

}