#include <stdio.h>
#include <math.h>

//Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o
//n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.

int main(){
	int num;
	double raizNum;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	raizNum = sqrt(num);
	
	if(num > 0){
		printf("%d ao quadrado = %d, raiz quadrada de %d = %.2lf", num, num*num, num, raizNum);
	}
	
	return 0;
}
