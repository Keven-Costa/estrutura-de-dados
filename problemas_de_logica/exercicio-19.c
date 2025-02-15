// exercicio-19

// Crie um programa para calcular o consumo médio de um automóvel, solicite ao usuário
// uma distância percorrida em KM e o total de combustível consumido, em litros.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float km_percorrido, combustivel_consumido, consumo;

	printf("Digite a distância percorrida em KM: " );
	scanf("%f", &km_percorrido);

	printf("Digite o total de Combustível Percorrido em litroa: ");
	scanf("%f", &combustivel_consumido);

	// Calculo para o consumo de combustível
	consumo = km_percorrido / combustivel_consumido;

	printf("O counsumo médio do automóvel: %.2fkm/l \n", consumo);
	return 0;
}