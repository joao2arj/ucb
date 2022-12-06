#include <stdio.h>

//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
//vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
//15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
//do mês, com duas casas decimais.

int main(){
	char nomeVendedor;
	float salario, vendas, salarioFinal;
	
	printf("Digite o nome do vendedor: ");
	fflush(stdin);
	scanf("%s", &nomeVendedor);
	
	printf("Digite o salario fixo: ");
	scanf("%f", &salario);
	
	printf("Digite o total de vendas feitas no mes: ");
	scanf("%f", &vendas);
	
	salarioFinal = salario + (vendas*1.15);
	
	pritnf("%s, Valor total a ser recebido: %.2lf.", nomeVendedor, salario);
	return 0;
}
