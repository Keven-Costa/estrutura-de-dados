// exercicio-17

// Crie um programa que solicita uma temperatura em graus Fahrenheit e converta e
// informe a temperatura em graus Celsius.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float temperatura_celsius, temperatura_fahrenheit, resultado;

	printf("Digite o valor da Temperatura em Graus Fahrenheit: ");
	scanf("%f", &temperatura_fahrenheit);

	temperatura_celsius = ((temperatura_fahrenheit - 32) * 5) / 9;

	printf("O valor em celsius: %.2f°C \n", temperatura_celsius);

	return 0;
}