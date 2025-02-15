// exercicio-03

// Crie um programa que some dois números inteiros e um número real.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numeroInteiro1, numeroInteiro2;
	float numeroFloat, resultado;

	printf("Digite o 1° número inteiro: ");
	scanf("%d", &numeroInteiro1);

	printf("Digite o 2° número inteiro: ");
	scanf("%d", &numeroInteiro2);

	printf("Digite um número Float: ");
	scanf("%f", &numeroFloat);


	resultado = numeroInteiro1 + numeroInteiro2 + numeroFloat;

	printf("O resultado é: %.2f\n", resultado);

	return 0;
}