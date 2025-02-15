// exercicio-1011

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double raio, volume;
	const double PI = 3.14159;

	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);

	volume = (4.0 / 3) * PI  *  pow(raio, 3);

	printf("VOLUME = %.3lf \n", volume);


	return 0;
}
