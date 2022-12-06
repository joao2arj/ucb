#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua
//senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros números do
//cpf. Elabore um algoritmo que gere e imprima a senha.

int main(){

	char nome[20], sobrenome[50], cpf[11], senha[20];
	
	printf("Digite o nome: ");
	fflush(stdin);
	fgets(nome, 20, stdin);
	
	printf("Digite o sobrenome: ");
	fflush(stdin);
	fgets(sobrenome, 50, stdin);
	
	printf("Digite o CPF: ");
	fflush(stdin);
	fgets(cpf, 11, stdin);
	

	print("A senha gerada e: %s", nome);
	return 0;
}
