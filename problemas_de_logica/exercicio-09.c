// exercicio-09

// Crie um programa que solicita a sua idade e informe o seu ano de nascimento.

#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t t;
    struct tm *data_atual;
    int anoDeNascimento, idade;

    time(&t); // Obtém o tempo atual
    data_atual = localtime(&t); // Converte para estrutura tm

    int ano_atual = data_atual->tm_year + 1900; // Ajusta o ano

    printf("Digite o sua idade: ");
    scanf("%d", &idade);

    anoDeNascimento = ano_atual - idade ;

    printf("Sua data de Nascimento´: %d\n", anoDeNascimento);

	return 0;
}