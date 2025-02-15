// exercicio-1008

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numero, horas_trabalhadas;
	float valor_por_hora, salario;

	printf("Digite o número do fucionário: ");
	scanf("%d", &numero);

	printf("Digite as Horas Trabalhadas: ");
	scanf("%d", &horas_trabalhadas);

	printf("Digite o Valor que Recebe Por Hora: ");
	scanf("%f", &valor_por_hora);

	salario = horas_trabalhadas * valor_por_hora;

	printf("NUMBER = %d \n", numero);
	printf("SALARY = R$ %.2f \n", salario);
	return 0;
}