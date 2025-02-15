// exercicio-1007

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int valor_a, valor_b, valor_c, valor_d, diferenca;

	printf("Digite o Valor de A: "); 
	scanf("%d", &valor_a);

	printf("Digite o Valor de B: ");
	scanf("%d", &valor_b);

	printf("Digite o Valor de C: ");
	scanf("%d", &valor_c);

	printf("Digite o Valor de D: ");
	scanf("%d", &valor_d);

	diferenca = (valor_a * valor_b - valor_c * valor_d);

	printf("DIFERENCA = %d \n", diferenca);

	return 0;
}