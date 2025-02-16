// exercicio-1013

#include <stdio.h>


int main(int argc, char const *argv[])
{
	int valor_1, valor_2, valor_3, maior;

	printf("Digite os valores: ");
	scanf("%d %d %d", &valor_1, &valor_2, &valor_3);

	if ( valor_1 >= valor_2 && valor_1 >= valor_3) {
		maior = valor_1;

	} else if ( valor_2 >= valor_1 && valor_2 >= valor_3 ) {
		maior = valor_2;

	} else if ( valor_3 >= valor_1 && valor_3 >= valor_1 ) {
		maior = valor_3;

	}

	printf("%d eh o maior\n", maior);
	return 0;
}