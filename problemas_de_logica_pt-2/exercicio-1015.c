// exercicio-1015

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float x1, y1, x2, y2;
	double distancia;

	printf("Digite os valores de X1 e Y1: ");
	scanf("%f %f", &x1, &y1);

	printf("Digite os valores de X2 e Y2: ");
	scanf("%f %f", &x2, &y2);

	distancia = sqrt( pow( x2 - x1, 2 ) + pow( y2 - y1, 2 ) );

	printf("%.4lf \n", distancia);
	return 0;
}