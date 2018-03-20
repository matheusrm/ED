#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main () {

	char string1[50], string2[50];
	int size;
	int b = 0;


		do {

			printf("Digite a primeira string : \n");
			memset(&string1,0,sizeof(char));
			scanf("%s",string1);
			printf("Digite a segunda string : \n");
			memset(&string2,0,sizeof(char));
			scanf("%s",string2);
			printf("Voce digitou : %s + %s\n",string1,string2);
			size = strlen(string1);
			printf("O tamanho da primeira string é : %d\n",size);
			size = strlen(string2);
			printf("O tamanho da segunda string é : %d\n",size);
			strcpy(string1,string2);
			printf("O novo valor da primeira string é : %s\n",string1);
			strcat((strcat(string1, " ")), string2);
			printf("%s\n",string1);

			for (int x = 0; ; x++) {
				if (string2[x] == '\0') {
					break;
				}
				b++;

			}

			printf("O tamanho da segunda string é : %d\n",b);

		}while(1);

}