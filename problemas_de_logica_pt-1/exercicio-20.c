// exercicio-20

// Crie um programa que solicita a um vendedor o seu salário fixo e o valor total de suas
// vendas no mês. Sabendo que a sua comissão é de 15%, calcule o salário a receber no final do
// mês.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float salario, valor_total_vendas, salario_final;

	printf("Digite o seu Salario R$: ");
	scanf("%f", &salario);

	printf("Digite o valor Total de Vendas: ");
	scanf("%f", &valor_total_vendas);

	salario_final = 0.15 * valor_total_vendas;
	salario_final += salario;

	printf("Você recebera no final do mês R$ %.2f \n", salario_final);

	return 0;
}