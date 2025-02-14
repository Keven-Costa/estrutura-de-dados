// exercicio-11
// Criar um programa que solicite um numero do usuário e diga se ele é par ou ímpar.

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int numero;

	printf("Digite um número:");
	scanf("%d", &numero);

	if (numero % 2 == 0)
	{
		printf("O número %d é Par\n", numero);

	} else {
		printf("O número %d é Ímpar\n", numero);
	}
	return 0;
}