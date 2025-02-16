// exercicio-1018

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int valor;
	int nota_100 = 0;
	int nota_50 = 0; 
	int nota_20 = 0;
	int nota_10 = 0;
	int nota_5 = 0;
	int nota_2 = 0;
	int nota_1 = 0;

	printf("Digite o valor: ");
	scanf("%d", &valor);

	if ( valor >= 100 ) {
		nota_100 = valor / 100;
		valor -= nota_100 * 100;
	}

	if ( valor >= 50 ) {
		nota_50 = valor / 50;
		valor -= nota_50 * 50;
	}

	if ( valor >= 20 ) {
		nota_20 = valor / 20;
		valor -= nota_20 * 20;
	}

	if ( valor >= 10 ) {
		nota_10 = valor / 10;
		valor -= nota_10 * 10;
	}

	if ( valor >= 5 ) {
		nota_5 = valor / 5;
		valor -= nota_5 * 5;
	}

	if ( valor >= 2 ) {
		nota_2 = valor / 2;
		valor -= nota_2 * 2;
	}

	if ( valor >= 1 ) {
		nota_1 = valor / 1;
		valor -= nota_1 * 1;
	}

	printf("%d nota(s) de R$ 100,00 \n", nota_100);
	printf("%d nota(s) de R$ 50,00 \n", nota_50);
	printf("%d nota(s) de R$ 20,00 \n", nota_20);
	printf("%d nota(s) de R$ 10,00 \n", nota_10);
	printf("%d nota(s) de R$ 5,00 \n", nota_5);
	printf("%d nota(s) de R$ 2,00 \n", nota_2);
	printf("%d nota(s) de R$ 1,00 \n", nota_1);

	return 0;
}