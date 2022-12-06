#include <stdio.h>
#include <string.h>

//Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas
//branco, verde e amarelo.

int main(){

	char cor[10];
	
	printf("Digite uma das cores: branco, verde ou amarelo.\n");
	fflush(stdin);
	scanf("%s", cor);
	
	if(strcmp(cor, "branco") != 0 && strcmp(cor, "verde") != 0 && strcmp(cor, "amarelo") != 0){
	do{
		printf("Digite uma cor valida: ");
		fflush(stdin);
		scanf("%s", cor);
		
	} while (strcmp(cor, "branco") != 0 && strcmp(cor, "verde") != 0 && strcmp(cor, "amarelo") != 0);
	}
	
	printf("Cor valida, finalizando...");
	
	return 0;
}
