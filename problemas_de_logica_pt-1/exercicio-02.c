// exercicio-02.c

// Crie um programa que some dois números.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float n1, n2, soma;

	printf("Digite o 1° número: ");
	scanf("%f", &n1);

	printf("Digite o 2° número: ");
	scanf("%f", &n2);

	soma = n1 + n2;

	printf("O resultado da soma é: %.2f\n", soma);
	return 0;
}