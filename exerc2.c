#include <stdio.h>

int main()
{
    int ano_nascimento = 2005;
    int idade_proxAno = 2026 - ano_nascimento;

    printf("Ano de nascimento: %d\n", ano_nascimento);
    printf("Idade no final do ano que vem: %d\n", idade_proxAno);

    return 0;
}