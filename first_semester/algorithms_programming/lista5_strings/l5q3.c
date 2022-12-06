#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabore um algoritmo que receba os dados: nome completo, e-mail e endereço de um usuário e
//faça um backup de todos eles em novas variávies.

int main(){

	char nome[20], email[50], endereco[90], nomeB[20], emailB[50], enderecoB[90];
	
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	fgets(nome, 20, stdin);
	
	printf("Digite email: ");
	fflush(stdin);
	fgets(email, 50, stdin);
	
	printf("Digite o endereco: ");
	fflush(stdin);
	fgets(endereco, 90, stdin);
	
	strcpy(nome, nomeB);
	strcpy(email, emailB);
	strcpy(endereco, enderecoB);
	
	return 0;
}
