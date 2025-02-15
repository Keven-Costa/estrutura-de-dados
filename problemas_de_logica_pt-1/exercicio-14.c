// exercicio-14

// Crie um programa que solicita um valor em metros e converta para centímetros.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float valor_centimetros, valor_metros;

	printf("Digite um valor em Metros: ");
	scanf("%f", &valor_metros);

	// Conversão de Metros para Centímetros
	valor_centimetros = valor_metros * 100;

	printf("O valor %.2fm para centímetros é: %.2fcm\n", valor_metros, valor_centimetros);
	return 0;
}