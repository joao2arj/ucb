#include <stdio.h>
#include <stdlib.h>

//Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
//apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
//deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a
//quantidade de frutas. Ao final, apresente o valor total da compra.
//1 => ABACAXI – 5,00 a unidade
//2 => MAÇA – 1,00 a unidade
//3 => PERA – 4,00 a unidade

int main() {
	
	int i, j, opc;
	float abacaxi = 0, maca = 0, pera = 0, soma = 0;
	
menu:
	printf("Escolha a opcao:\n1.Comprar frutas\n2.Valor total\nOpcao: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			printf("Escolha a fruta:\n1. Abacaxi (R$ 5,00/un)\n2. Maca (R$ 1,00/un)\n3. Pera (R$ 4,00/un)\nFruta: ");
			scanf("%d", &opc);
			
			printf("Digite a quantidade desejada: ");
			scanf("%d", &j);
			
			if(opc == 1){
				for(i = 0; i < j; i++){
					abacaxi += 5;
				}
			}
			else if(opc == 2){
				for(i = 0; i < j; i++){
					maca += 1;
				}}
			else if(opc == 3){
				for(i = 0; i < j; i++){
					pera += 4;
				}
				}
			else{
				printf("Opcao invalida.");
			}
			
			soma += pera + maca + abacaxi;
			
			goto menu;
			
		case 2:
			printf("Valor total:\n");
			printf("R$ %.2f", soma);
			
		default:
			printf("OPCAO INVALIDA!\n");
			break;
	}
 return 0;
}
