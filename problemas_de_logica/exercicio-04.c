// exercicio-04

//Crie um programa que solicite duas notas e calcule a média do aluno.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float nota1, nota2, media;

	printf("Digite a 1° nota: ");
	scanf("%f", &nota1);

	printf("Digite a 2° nota:");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	printf("A média é: %.2f\n", media);

	return 0;
}