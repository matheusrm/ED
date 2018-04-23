#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dependentes {

    char nome[50];
    int codigo;
    int idade;
    char parentesco;


};

typedef struct dependentes depend;

struct funcionario {

    char nome[50];
    int codigo;
    int idade;
    char cargo;
    float salario;
    int qtdDependentes;
    depend dependente;
    depend *dependen;


};

typedef struct funcionario func;

void menu();
void nomeFun(char *nome);
void nomeDep(char *nome);
void idadeFuncionario(int *idade);
void cargoFuncionario(char *cargo);
void quantDependente(int *quantDependentes);
void salario(float *salario,char *cargo, int *quantDependentes);
void idadeDependente(int *idade);
void parentesco(char *parentesco);
depend* dadosDependentes(int quantDependentes);
func* cadastrar();
void listarFunc(func *func, int qtd);
void listarFuncCargo(func *func, int qtd);




int main() {

    setbuf(stdout, NULL);
    char pos;
    int qtd;
    func *pontFunc = NULL;
    do {
        menu();
        printf("\nDigite uma opção : \n");
        fflush(stdin);
        scanf("%c",&pos);
        if(pos == 'a' || pos == 'A') {
            pontFunc = cadastrar(&qtd);
        }else if (pos == 'b' || pos == 'B') {
            listarFunc(pontFunc,qtd);
        }else if (pos == 'c' || pos == 'C') {
            listarFuncCargo(pontFunc,qtd);
        }
    }while(pos != 'd' && pos != 'D');

        
}

void menu() {

    printf("\nA - Efetuar cadastro de funcionários\n");
    printf("B - Listar funcionários da empresa\n");
    printf("C - Listar funcionários por cargo escolhido\n");
    printf("D - Finalizar\n");
    printf("\n");
}

void nomeFun(char *nome) {
    printf("\nDigite o nome do funcionario:\n");
    scanf("%s",nome);
}

void nomeDep(char *nome) {
    printf("\nDigite o nome do dependente:\n");
    scanf("%s",nome);
}

void codigo(int *codigo) {

    *codigo = rand();

}

void idadeFuncionario(int *idade) {

    do {
        printf("\nDigite a idade do funcionario\n");
        fflush(stdin);
        scanf("%d",idade);
        if(*idade < 16 || *idade > 100) {
            printf("\nIdade invalida. Digite um numero entre 16 e 100\n");
        }
    }while(*idade < 16 || *idade > 100);
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

void parentesco(char *parentesco) {

    do {
        printf("\nDigite o parentesco\n");
        fflush(stdin);
        scanf("%c",parentesco);
        if (*parentesco != 'E' && *parentesco != 'F' && *parentesco != 'T') {
            printf("\nParentesco deve ser E/F/T");
        }

    }while(*parentesco != 'E' && *parentesco != 'F' && *parentesco != 'T');
}



depend* dadosDependentes(int quantDependentes) {

        depend *dependentes = (depend *) malloc(quantDependentes * sizeof(depend));
        int a;
        if(quantDependentes > 0) {
            for (a = 0 ; a < quantDependentes ; a++) {
                nomeDep(&dependentes[a].nome);
                codigo(&dependentes[a].codigo);
                idadeDependente(&dependentes[a].idade);
                parentesco(&dependentes[a].parentesco);
            }
        }else {
            printf("\nQuantidade de dependentes abaixo ou igual a 0\n");
        }
        return dependentes;
    
}

func* cadastrar(int *qtd) {
    printf("\nDigite o numero de funcionarios que deseja cadastrar\n");
    fflush(stdin);
    scanf("%d",qtd);
    func *funcionarios = (func *) malloc (*qtd * sizeof(func));
    int b;
    if (*qtd > 0) {
        for (b = 0 ; b < *qtd ; b++) {
            
            nomeFun(&funcionarios[b].nome);
            codigo(&funcionarios[b].codigo);
            idadeFuncionario(&funcionarios[b].idade);
            cargoFuncionario(&funcionarios[b].cargo);
            quantDependente(&funcionarios[b].qtdDependentes);
            salario(&funcionarios[b].salario, &funcionarios[b].cargo, &funcionarios[b].qtdDependentes);
            funcionarios[b].dependen = dadosDependentes (funcionarios[b].qtdDependentes);

        }

    }else {
        printf("\nQuantidade de funcionarios abaixo ou igual a 0\n");
    }
    return funcionarios;
}

void listarFunc(func *func, int qtd) {

    int a,b;
    if(qtd > 0) {

        for (a = 0 ; a < qtd ; a++) {

            printf("\nNome: %s\n",func[a].nome);
            printf("Codigo: %d\n",func[a].codigo);
            printf("Idade: %d\n", func[a].idade);
            printf("Cargo: %c\n", func[a].cargo);
            printf("Quantidade Dependentes: %d\n", func[a].qtdDependentes);
            printf("Salario: %f\n", func[a].salario);
            printf("Dados do dependente do funcionário %s: \n", func[a].nome);
            for(b = 0; b < func[a].qtdDependentes ; b++) {
                printf("\nNome dependente : %s\n", func[a].dependen[b].nome);
                printf("Codigo dependente : %d\n", func[a].dependen[b].codigo);
                printf("Idade do dependente : %d\n",func[a].dependen[b].idade);
                printf("Parentesco do dependente : %c\n",func[a].dependen[b].parentesco);
            }
        }
    }else {
        printf("\nQuantidade de funcionarios abaixo ou igual a 0\n");
    }
}

    void listarFuncCargo(func *func, int qtd) {

        char cargo;
        printf("\nDigite o cargo do funcionario:");
        fflush(stdin);
        scanf("%c",&cargo);
        if (cargo != 'E' && cargo != 'J' && cargo != 'P' && cargo != 'S' && cargo != 'G') {
            printf("\nCargo invalido ! \n");
        }else {
            int a,sentinel = 0;
            if (qtd > 0) {
                printf("\nDados dos funcionarios com cargo [%c]", cargo);
                for (a = 0; a < qtd ; a++) {
                    if(func[a].cargo == cargo) {
                        sentinel = 1;
                        printf("\nNome: %s\n",func[a].nome);
                        printf("Codigo: %d\n",func[a].codigo);
                        printf("Idade: %d\n",func[a].idade);

                    }
                }
            }
                if(sentinel == 0) {
                    printf("\nNenhum funcionario encontrado ! \n");
                }
            }
        }
