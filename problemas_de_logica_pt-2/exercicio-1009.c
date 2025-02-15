// exercicio-1009

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double salario_fixo, salario_final ,total_vendas;
	const double comissao = 0.15;

	printf("Digite o nome do Vendendor: ");
	scanf("%*s");

	printf("Digite o valor do Salario Fixo: ");
	scanf("%lf", &salario_fixo);

	printf("Digite o valor total das Vendas: ");
	scanf("%lf", &total_vendas);

	salario_final = (total_vendas * comissao) + salario_fixo;

	printf("TOTAL = R$ %.2lf \n", salario_final);
	return 0;
}