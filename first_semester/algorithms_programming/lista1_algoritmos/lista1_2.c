#include <stdio.h>
#include <stdlib.h>

int main() {

float raio, area, pi;
pi = 3,14;

printf("Digite o raio do circulo:\n");
scanf("%f", &raio);

area = pi*(raio*raio);

printf("A area do circulo e:%f\n", area);

}
