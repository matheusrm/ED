#ifndef  LIBARY_H
#define  LIBARY_H

#include <stdio.h>
#include <stdlib.h>

void nomeFun(char *nome);
void nomeDep(char *nome);
void cargoFuncionario(char *cargo);
void quantDependente(int *quantDependentes);
void salario(float *salario,char *cargo, int *quantDependentes);
void idadeDependente(int *idade) ;
int verificador (int cont,char *codigo, int resultado );
void codigo(int *vet, char *nome[50], char matricula[9]);

#endif 
