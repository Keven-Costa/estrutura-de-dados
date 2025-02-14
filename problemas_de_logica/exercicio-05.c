// exercicio-05.c

// Crie um programa que solicite duas notas do aluno, calcule a média e informe se o aluno
// está "aprovado" ou "reprovado" (média 6.0)

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float nota1, nota2, media;

	printf("Digite a 1° nota: ");
	scanf("%f", &nota1);

	printf("Digite a 2° nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 6.0)
	{
		printf("Aprovado\n");
		printf("Sua nota: %.2f\n", media);

	}else{
		printf("Reprovado\n");
		printf("Sua nota: %.2f\n", media);
	}
	return 0;
}