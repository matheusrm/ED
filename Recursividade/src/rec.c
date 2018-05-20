#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex(int a);
int f(int a,int b,int res);
void tabuada(int x, int y);
void serie(int param, double *res);

int main() {
	setbuf(stdout, NULL);
	int res = f(3,5,0);
	printf("%d",res);
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
