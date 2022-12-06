#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Uma pesquisa sobre algumas características físicas da população de uma determinada
//região coletou os seguintes dados, referentes a cada habitante:
//a) sexo (m e f);
//b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
//c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
//d) idade em anos.
//e) valor do salário.
//Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos
//somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor
//dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100
//anos, inclusive estes e para o salário, não aceitar valores negativos.
//Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com
//idade igual a –1.
//Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com
//idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.

int main() {
	
	char sexo[1], olho, cabelo;
	int idade, individuos = 0;
	float salario;
	
	printf("Digite o sexo (m e f): ");
	fflush(stdin);
	scanf("%m", &sexo);
	
	if(sexo != "f" && sexo != "m"){
		printf("Formato invalido!\n");
		printf("Digite o sexo (m e f): ");
		fflush(stdin);
		scanf("%c", &sexo);
	}
	
	printf("Digite a cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos): ");
	fflush(stdin);
	scanf("%c", &olho);
	
	if(olho != "a" && olho != "v" && olho != "c" && olho != "p"){
		printf("Formato invalido!\n");
		printf("Digite a cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos): ");
		fflush(stdin);
		scanf("%c", &olho);
	}
	
	printf("Digite a cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos): ");
	fflush(stdin);
	scanf("%c", &cabelo);
	
	if(cabelo != "l" && cabelo != "c" && cabelo != "p" && cabelo != "r"){
		printf("Formato invalido!\n");
		printf("Digite a cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos): ");
		fflush(stdin);
		scanf("%c", &cabelo);
	}
	
	printf("Digite a idade (1-100): ");
	fflush(stdin);
	scanf("%d", &idade);
	
	if(idade < 1 && idade > 100){
		printf("Formato invalido!\n");
		printf("Digite a idade (1-100): ");
		fflush(stdin);
		scanf("%d", &idade);
	}
	
	printf("Digite o salario (1-100): ");
	fflush(stdin);
	scanf("%f", &salario);
	
	if(salario < 0){
		printf("Formato invalido!\n");
		printf("Digite o salario (1-100): ");
		fflush(stdin);
		scanf("%f", &salario);
	}
	
	if(sexo == "m" && idade >= 18 && idade <= 35 && olho == "c" && cabelo == "c"){
		individuos++;
	}
	
	printf("Individuos especificos: %d", individuos);
	
	return 0;
}
