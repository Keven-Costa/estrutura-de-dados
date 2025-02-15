// exercicio-1012

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double valor_a, valor_b, valor_c;
	double triangulo, circulo, trapezio, quadrado, retangulo;
	const double PI = 3.14159;

	printf("Digite os valores: ");
	scanf("%lf %lf %lf", &valor_a, &valor_b, &valor_c);

	triangulo = (valor_a * valor_c) / 2;
	circulo = PI * (pow(valor_c, 2));
	trapezio = ( (valor_a + valor_b) * valor_c) / 2;
	quadrado = pow(valor_b, 2);
	retangulo = valor_a * valor_b;

	printf("TRIANGULO: %.3lf \n", triangulo); 
	printf("CIRCULO: %.3lf \n", circulo); 
	printf("TRAPEZIO: %.3lf \n", trapezio); 
	printf("QUADRADO: %.3lf \n", quadrado); 
	printf("RETANGULO5.2: %.3lf \n", retangulo); 

	return 0;
}