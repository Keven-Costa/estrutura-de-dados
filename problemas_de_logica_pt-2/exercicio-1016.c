// exercicio-1016

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distacia_km, tempo;

	printf("Digite a distância em km: ");
	scanf("%d", &distacia_km);

	tempo = distacia_km * 2;

	printf("%d minutos\n", tempo);
	return 0;
}