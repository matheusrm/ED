#include <stdio.h>
#include <stdlib.h>

void ex(int a);
int f(int a,int b);

int main() {
	setbuf(stdout, NULL);
	ex(10);
	printf("\n%d",f(3,5));
	return 0;
	printf("\n");
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

int f(int a,int b) {
	if(b == 0) {
		return 0;
	}
	return a+f(a,b-1);
}
//3 + (3 + (3 + (3 + (0)))

