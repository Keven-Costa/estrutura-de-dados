// exercicio-1010

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float informacoes_peca1[3];
	float informacoes_peca2[3];
	float total;

	printf("Digite as infrmações da peça 1: ");
	scanf("%f %f %f", &informacoes_peca1[0], &informacoes_peca1[1], &informacoes_peca1[2]);


	printf("Digite as infrmações da peça 2: ");
	scanf("%f %f %f", &informacoes_peca2[0], &informacoes_peca2[1], &informacoes_peca2[2]);


	total = informacoes_peca1[1] * informacoes_peca1[2];
	total += informacoes_peca2[1] * informacoes_peca2[2];

	printf("Valor a pagar: %.2f \n", total);

	return 0;
}