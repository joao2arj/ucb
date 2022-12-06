#include <stdio.h>

//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
//empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
//concedido.”, caso contrário, imprima: “Empréstimo concedido.”

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
