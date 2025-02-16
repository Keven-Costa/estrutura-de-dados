// exercicio-1014

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int km_percorrido;
	float combustivel_gasto, consumo_medio;	

	printf("Digite o a distância percorrida em km: ");
	scanf("%d", &km_percorrido);

	printf("Digite o total de combustivel gasto (em litros): ");
	scanf("%f", &combustivel_gasto);

	consumo_medio = km_percorrido / combustivel_gasto;

	printf("%.3f km/l \n", consumo_medio);

	return 0;
}