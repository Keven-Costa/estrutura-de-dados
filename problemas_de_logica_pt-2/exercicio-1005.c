// exercicio-1005

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double nota1, nota2, media;
	const double peso_nota1 = 3.5;
	const double peso_nota2 = 7.5;

	printf("Digite o valor da Nota 1: ");
	scanf("%lf", &nota1);

	printf("Digite o valor da Nota 2: ");
	scanf("%lf", &nota2);

	// Cálculo para a média
	media = ( (nota1 * peso_nota1) + (nota2 * peso_nota2) ) / 11;

	printf("MEDIA = %.5lf \n", media);

	return 0;
}