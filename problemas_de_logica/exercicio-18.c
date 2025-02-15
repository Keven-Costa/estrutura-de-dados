// exercicio-18

// Crie um programa que solicita o peso e a altura de um usuário e informe o seu IMC (Índice
// de massa corpórea)

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	double peso, altura, imc;

	printf("Digite sua altura: ");
	scanf("%lf", &altura);

	printf("Digite seu peso: ");
	scanf("%lf", &peso);

	//Calculo para calcular o IMC
	imc = peso / ( pow(altura, 2) );

	// Abaixo de 18.5
	bool abaixo_do_peso = imc < 18.5;    

	// Entre 18,5  e 24,9
	bool peso_normal = imc >= 18.5 && imc <= 24.9; 	

	// Entre 25 e 29.9
	bool sobrepeso = imc >= 25 && imc <= 29.9;

	// Entre 30 e 34.9
	bool obsidade_grau_1 = imc >= 30 && imc <=34.9;

	// Entre 35 e 39.9
	bool obsidade_grau_2 = imc >= 35 && imc <= 39.9;

	// Acima de 40
	bool obsidade_grau_3 = imc >= 40;	


	if (abaixo_do_peso)
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está Abaixo do Peso\n");

	} else if (peso_normal)
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está com o Peso Normal\n");

	} else if (sobrepeso)
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está com Sobrepeso\n");		

	} else if (obsidade_grau_1)
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está com Obesidade Grau 1\n");	

	} else if (obsidade_grau_2) 
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está com Obesidade Grau 2\n");

	} else if (obsidade_grau_3)
	{
		printf("Seu IMC é: %.2f \n", imc);
		printf("Você está com Obesidade Grau 3\n");	

	} else {
		printf("Algo deu errado!\n");
	}


	return 0;
}
