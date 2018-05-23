#include "library.h"

void nomeFun(char *nome) {
    printf("\nDigite o nome do funcionario:\n");
    scanf("%s",nome);
}

void nomeDep(char *nome) {
    printf("\nDigite o nome do dependente:\n");
    scanf("%s",nome);
}

void cargoFuncionario(char *cargo) {

    do {
        printf("\nDigite o cargo do funcionario\n");
        fflush(stdin);
        scanf("%c",cargo);
        if (*cargo != 'E' && *cargo != 'J' && *cargo != 'P' && *cargo != 'S' && *cargo != 'G') {
            printf("\nCargo E/J/P/S/G\n");
        }
    }while(*cargo != 'E' && *cargo != 'J' && *cargo != 'P' && *cargo != 'S' && *cargo != 'G');
}

void quantDependente(int *quantDependentes) {

    do {
        printf("\nDigite a quantidade de dependentes\n");
        fflush(stdin);
        scanf("%d", quantDependentes);
        if(*quantDependentes < 0 || *quantDependentes > 10) {
            printf("\nQuantidade deve ser entre 0 e 10\n");
        }
    }while(*quantDependentes < 0 || *quantDependentes > 10);
}

void salario(float *salario,char *cargo, int *quantDependentes) {

    if(*cargo == 'E') {
        *salario = 954 + 15.90*(*quantDependentes);
    }else if (*cargo == 'J') {
        *salario = 3*954 + 23.15*(*quantDependentes);
    }else if (*cargo == 'P') {
        *salario = 5*954 + 35.72*(*quantDependentes);
    }else if (*cargo == 'S') {
        *salario = 7*954 + 49*(*quantDependentes);
    }else {
        *salario = 9*954 + 68.29*(*quantDependentes);
    }
    
}

void idadeDependente(int *idade) {

    do {
        printf("\nDigite a idade do dependente\n");
        fflush(stdin);
        scanf("%d",idade);
        if(*idade < 0 || *idade > 24) {
            printf("\nIdade deve ser entre 0 e 24 anos");
        }
    }while(*idade < 0 || *idade > 24);
}

int verificador (int cont,char *codigo, int resultado ){
	if(cont==1){
		int numero= codigo[cont]-48;
		return resultado+=(numero*5);
	}else{
		int numero=codigo[cont]-48;
		resultado+=cont*5*numero;
		return verificador(cont-1, codigo, resultado);
	}
}

void codigo(int *vet, char *nome[50], char matricula[9]){
	char novo=nome[0];
	char l= toupper(novo);
	char codigo[7];
	codigo[0]=l;
	int numero= l;
	codigo[1]=numero;
	numero= l-64;
	if(numero<10){
		codigo[3]=0;
		codigo[4]=numero;
	}else{
		codigo[3]=numero;
	}
	codigo[5]= vet[numero-1];
	vet[numero-1]++;
	//int veri=verificador(7,codigo,0)%11;
	strcpy (matricula,codigo);

}
