// exercicio-15

// Crie um programa que solicita ao usuário o raio de um círculo e calcule a sua área.

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double raio, area;
	const double PI =  3.1415;

	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);

	// Calculo para calcular a área do círculo
	area = PI * pow(raio, 2);

	printf("A área do círculo é: %.2lf", area);


	return 0;
}