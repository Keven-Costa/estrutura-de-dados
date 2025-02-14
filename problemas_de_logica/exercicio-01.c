// exercicio-01

// Crie um programa para exibir o seu nome.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char nome[50];
	printf("Digite seu nome: ");
	scanf("%s", nome);

	printf("Seu nome é: %s\n", nome);
	return 0;
}