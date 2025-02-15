// exercicio-1002

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float area, raio;
	const float PI = 3.14159;

	printf( "Digite o valor do Raio: " );
	scanf( "%f", &raio);

	area = PI * ( pow(raio, 2) );

	printf( "A=%.4f \n", area);
	return 0;
}