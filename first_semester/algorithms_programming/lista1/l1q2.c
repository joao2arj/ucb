#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{

float raio, area, pi;
//pi = 3,14; (para var.)

printf("Digite o raio do circulo:\n");
scanf("%f", &raio);

area = PI*(raio*raio);

printf("A area do circulo e:%f\n", area);

}
