#include <stdio.h>
#include <math.h>

//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//possui uma taxa diferente de imposto sobre o produto. Fa�a um programa em que o
//usu�rio entre com o valor e o estado de destino do produto e o programa retorne o pre�o
//final do produto acrescido do imposto do estado em que ele ser� vendido. Se o estado
//digitado n�o for v�lido, mostrar� uma mensagem de erro.

int main(){
	
	float valor;
	int estado;
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	printf("Escolha o estado:\n1. MG\n2. SP\n3. RJ\n4. MS\nEstado: ");
	scanf("%d", &estado);
	
	if(estado == 1){
		valor = valor*1.07;
	}
	else if(estado == 2){
		valor = valor*1.12;
	}
	else if(estado == 3){
		valor = valor*1.15;
	}
	else if(estado == 4){
		valor = valor*1.08;
	}
	else{
		printf("Estado nao valido, ERRO!");
	}
	
	printf("Valor final: R$ %.2f", valor);
	return 0;
}
