#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do
//usuário. Concatene os dados e imprima o valor final.

int main(){

	char nome[20], nomeMeio[50], nomeUltimo[20], nomeCompleto[90];
	
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	fgets(nome, 20, stdin);
	
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	fgets(nomeMeio, 50, stdin);
	
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	fgets(nomeUltimo, 20, stdin);
	
	strcat(nome, nomeMeio);
	strcat(nome, nomeUltimo);
	printf("Nome completo: %s", nome);
	
	return 0;
}
