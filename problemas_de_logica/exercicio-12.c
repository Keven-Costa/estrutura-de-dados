// exercicio-12

//Criar um programa que solicite um numero do usuário e diga se ele é par ou ímpar.

#include <stdio.h>
#include <stdbool.h> // Necessário para usar o tipo bool
#include <stdlib.h>
#include <time.h>  // Para usar time() como semente

int numeroAleatorio(){
	// Semeia o gerador de números aleatórios com o tempo atual
	srand(time(NULL));

    // Para gerar um número aleatório dentro de um intervalo específico, por exemplo, entre 0 e 99
	int numero_aleatorio_intervalo = rand() % 100;

}

bool verificaImparOuPar(int* valor){
	if (*valor % 2 == 0)
	{
		return true; // Par 

	} else {
		return false; // Ímpar

	}
}

int main(int argc, char const *argv[])
{
	int numero, numero_aleatorio;
	bool impar_ou_par = false; // false = ímpar, true = par

	// Enquanto o usuário não digitar um número inteiro correto o programa não avança
	do {
		printf("Escolha um número: \n");
		printf("1 - Ìmpar \n2 - Par\n");
		scanf("%d", &numero);

		switch (numero) {
		case 1:
			impar_ou_par = false;
			break;
		case 2:
			impar_ou_par = true;
			break;
		default:
			printf("Algo deu errado tente novamente!\n");
		}

	} while (numero != 1 && numero != 2);

	numero_aleatorio = numeroAleatorio(); 		
	impar_ou_par = verificaImparOuPar(&numero); 

	// Verifica se o usuário ganhou ou perdeu	
	if ( (numero_aleatorio % 2 == 0 && impar_ou_par == true) || numero_aleatorio % 2 != 0 && impar_ou_par == false)
	{
		printf("O numero sorteado foi %d\n", numero_aleatorio);
		printf("Você ganhou!\n");

	}else
	{
		printf("O numero sorteado foi %d\n", numero_aleatorio);
		printf("Você perdeu!\n");	
	}



	return 0;
}