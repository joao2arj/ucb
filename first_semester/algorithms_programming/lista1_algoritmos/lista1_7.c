#include <stdio.h>

int main(){

char nome[100], sexo;
int mat;
float ht, valorh, salario;

printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	
printf("Digite a sua matricula:\n");
	scanf("%d", &mat);
	
//printf("Digite o seu sexo:\n");
//	scanf("%s", &sexo);
	
printf("Digite a quantidade de horas trabalhadas por mes:\n");
	scanf("%f", &ht);
	
printf("Digite quanto voce recebe por hora trabalhada:\n");
	scanf("%f", &valorh);	

salario = ht*valorh;	

printf("Ola, %s (%d)! Sexo %c. Seu salario mensal e: R$ %.2f\n", nome, mat, sexo, salario);	
	
return 0;
}
