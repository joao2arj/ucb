#include <stdio.h>
#include <string.h>

//Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de
//caracteres digitados.

int main(){

	char name[100];
	int lenName;
	
	printf("Digite o seu nome: ");
	fgets(name, 100, stdin);

	lenName = strlen(name)-1;
	
	printf("Quantidade de caracteres digitados: %d.", lenName);
	return 0;
}
