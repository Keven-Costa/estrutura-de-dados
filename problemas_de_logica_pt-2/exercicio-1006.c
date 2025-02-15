// exercicio-1006

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double nota1, nota2, nota3, media;
	const double peso_nota1 = 2;
	const double peso_nota2 = 3;
	const double peso_nota3 = 5;

	printf("Digite o valor da Nota 1: ");
	scanf("%lf", &nota1);

	printf("Digite o valor da Nota 2: ");
	scanf("%lf", &nota2);

	printf("Digite o valor da Nota 3: ");
	scanf("%lf", &nota3);

	media = ( (nota1 * peso_nota1) + (nota2 * peso_nota2) + (nota3 * peso_nota3) ) / (peso_nota1 + peso_nota2 + peso_nota3);

	printf("MEDIA = %.1lf \n", media);

	return 0;
}