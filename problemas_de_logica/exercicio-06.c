// exercicio-06.c

// Crie um programa que solicite 3 notas do aluno
//  (Av1, Av2, Av3), descarte a menor nota e 
// exiba a média do aluno, informando se o mesmo foi aprovado ou não.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float notas[3], media, menor;

	// Um laço de repetição para ajudar no printf
	for (int i = 0; i < 3; ++i)
	{
		printf("Digite a %d° nota: ", i + 1);
		scanf("%f", &notas[i]);
	}

	menor = notas[0];

	// Verifica qual número é menor
	for (int i = 0; i < 3; ++i)
	{
		
		if (notas[i] < menor)
		{
			menor = notas[i];
		}

		// Soma todos os números
		media += notas[i];
	}

	printf("O número %.2f foi descartado\n", menor);


	media -= menor;	// Subtrai o menor número

	media = media / 2;

	if (media > 6.0)
	{
		printf("Aprovado\n");
		printf("nota do aluno: %.2f\n", media);

	}else
	{
		printf("Reprovado\n");
		printf("nota do aluno: %.2f", media);
	}

	return 0;
}