// exercicio-10

// Crie um programa que solicita um valor ao usuário (idade ou ano de nascimento) e
// informe a sua idade ou a sua data de nascimento.

#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t t; // Declara uma variável para armazenar o tempo atual em segundos desde 1º de janeiro de 1970

	struct tm *data_atual; // Ponteiro para uma estrutura que armazena informações de data e hora de forma detalhada

    int anoDeNascimento, idade, estradaUsuario;

    time(&t); // Obtém o tempo atual
    data_atual = localtime(&t); // Converte para estrutura tm

    int ano_atual = data_atual->tm_year + 1900; // Ajusta o ano

    printf("Digite sua idade ou o ano de Nascimento: ");
    scanf("%d", &estradaUsuario);


    // Verifica se a 'entadaUsuario' é ano ou idade
 	if (estradaUsuario >= 0 && estradaUsuario <= 120) // Verifica se 'estradaUsuario' está entre 0 e 120
    {
    	anoDeNascimento = ano_atual - estradaUsuario;
    	idade = estradaUsuario;

    	printf("Sua idade: %d\n", idade);
    	printf("Seu ano de Nascimento: %d\n", anoDeNascimento);

    } 
    else if (estradaUsuario >= 1950 && estradaUsuario <= ano_atual) // Verifica se 'estradaUsuario' está entre 1950 e o ano atual
    {
    	anoDeNascimento = estradaUsuario;
    	idade = ano_atual - estradaUsuario;

    	printf("Sua idade: %d\n", idade);
    	printf("Seu ano de Nascimento: %d\n", anoDeNascimento);
    }
    else 
    {
    	printf("Algo deu errado!");
    }



	return 0;
}
