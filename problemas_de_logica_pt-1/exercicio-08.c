// exercicio-08

// Crie um programa que solicita o ano de nascimento do usuário e informe a sua idade.


#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *data_atual;
    int anoDeNascimento, idade;

    time(&t); // Obtém o tempo atual
    data_atual = localtime(&t); // Converte para estrutura tm

    int ano_atual = data_atual->tm_year + 1900; // Ajusta o ano

    printf("Digite o ano que você nasceu: ");
    scanf("%d", &anoDeNascimento);

    idade = ano_atual - anoDeNascimento;
    printf("Sua idade é: %d\n", idade);

    return 0;
}
