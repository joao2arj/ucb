#include <stdio.h>

//Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
//empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
//concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�

int main(){
	double salario, prestacao, valorPrestacao;
	
	printf("Digite o valor do salario: ");
	scanf("%lf", &salario);
	
	printf("Digite o valor da prestacao: ");
	scanf("%lf", &prestacao);
	
	if(prestacao > salario*0.2){
		printf("Emprestimo nao concedido");
	}
	else{
		printf("Emprestimo concedido");
	}

	return 0;
}
