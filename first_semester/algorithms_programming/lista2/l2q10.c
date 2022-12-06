#include <stdio.h>
#include <math.h>

//Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
//no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
//decimais após a vírgula, segundo a fórmula:

int main(){

	float x1, y1, x2, y2, distancia;
	
	printf("Digite o valor de x1 (p1): ");
	fflush(stdin);
	scanf("%f", &x1);
	
	printf("Digite o valor de y1 (p1): ");
	fflush(stdin);
	scanf("%f", &y1);
	
	printf("Digite o valor de x2 (p2): ");
	fflush(stdin);
	scanf("%f", &x2);
	
	printf("Digite o valor de y2 (p2): ");
	fflush(stdin);
	scanf("%f", &y2);
	
	distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));
	
	pritnf("Distancia entre os pontos p1 e p2: %.4lf.", distancia);
	return 0;
}
