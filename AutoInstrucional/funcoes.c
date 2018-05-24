
void codigo(int *vet, char *nome[50], char matricula[9]){
    char primeira= nome[0];
	char l= toupper(primeira);
    char codigo[7]="";
    char aux[2];
    codigo[0]=l;
    int numero= l;
    sprintf(aux,"%d",numero);
    strcat(codigo,aux);
    numero= l-64;
    if(numero<10){
        strcat(codigo,"0");
        sprintf(aux,"%d",numero);
        strcat(codigo,aux);
    }else{
    	 sprintf(aux,"%d",numero);
    	 strcat(codigo,aux);
    }
    vet[numero-1]++;
    if(vet[numero-1]<10){
            strcat(codigo,"0");
            sprintf(aux,"%d",vet[numero-1]);
            strcat(codigo,aux);
        }else{
        	 sprintf(aux,"%d",vet[numero-1]);
        	 strcat(codigo,aux);
        }
    strcpy (matricula,codigo);
    strcat(matricula,"-");
    numero =verificador(6,codigo,0);
    numero=numero%11;
    if(numero==10){
    	numero=0;
    }
    sprintf(aux,"%d",numero);
    strcat(matricula,aux);

}
