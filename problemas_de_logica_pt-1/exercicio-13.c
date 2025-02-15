// exercicio-13

// Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
// número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar. Agora o
// computador deve sempre GANHAR!

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	// Enquanto o usuário não digitar um número inteiro correto o programa não avança
	int numero, numero_aleatorio;
	bool impar_ou_par = false; // false = ímpar, true = par

	// Enquanto o usuário não digitar um número inteiro correto o programa não avança
	do {
		printf("Escolha um número: \n");
		printf("1 - Ìmpar \n2 - Par\n");
		scanf("%d", &numero);

		switch (numero) {
		case 1:
			impar_ou_par = false;
			break;
		case 2:
			impar_ou_par = true;
			break;
		default:
			printf("Algo deu errado tente novamente!\n");
		}

	} while (numero != 1 && numero != 2);

	printf("Você escoulheu o número: %d", numero);
	printf("Você escolheu: ");

	return 0;
}