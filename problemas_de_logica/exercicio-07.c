// exercicio-07

// Crie um programa que solicita um número e informa se ele é positivo ou negativo.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float numero;

	printf("Digite um númro: ");
	scanf("%f", &numero);

	if (numero > 0)
	{
		printf("O número %.2f é positivo\n", numero);

	}else if(numero < 0)
	{
		printf("O número %.2f é negativo\n", numero);

	}else
	{
		printf("O número 0 é neutro\n");
	}

	return 0;
}