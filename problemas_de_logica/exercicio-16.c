// exercicio-16

// Crie um programa que solicita ao usuário o valor da hora trabalhada, quantas horas
// trabalho no mês e calcule o valor a receber no final do mês.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float valor_hora, horas_trabalhadas_mes, resultado;

	printf("Digite o valor da Hora Trabalhadas: ");
	scanf("%f", &valor_hora);

	printf("Digite o quantidade de Horas Trabalhadas no Mês: ");
	scanf("%f", &horas_trabalhadas_mes);

	// Calculo 
	resultado = valor_hora * horas_trabalhadas_mes;

	printf("Valor no fim do mês: %.2f \n", resultado);

	return 0;
}
