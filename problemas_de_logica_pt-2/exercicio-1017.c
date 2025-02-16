// exercicio-1017

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int tempo_gasto, velocidade_media;
	double litros_combustivel, consumo_combustivel;
	const float CONSUMO_VEICULO = 12.0; 

	printf("Digite o tempo gasto da viagem (em horas): ");
	scanf("%d", &tempo_gasto);

	printf("Digite a velocidade média durante a viágem (em km):");
	scanf("%d", &velocidade_media);

	// Calculos
	consumo_combustivel = velocidade_media / CONSUMO_VEICULO;
	litros_combustivel = consumo_combustivel * tempo_gasto;

	printf("%.3lf \n", litros_combustivel);
	return 0;
}