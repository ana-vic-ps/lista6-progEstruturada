#include <stdio.h>

/* Questão 1 - Desenvolva um algoritmo em C, que leia um numero inteiro,
armazene-o em uma variável do tipo inteiro, crie uma variável do tipo ponteiro,
faça a troca do conteúdo do valor armazenado da variável do tipo inteiro para a
variável do tipo ponteiro. Exiba os valores antes e após a troca. */

int main()
{

    int n;
    int *ponteiro = 0;

    printf("Digite um valor: ");
    scanf("%i", &n);

    printf("\nAntes da troca (n): %i", n);
    printf("\nAntes da troca (ponteiro): %d", ponteiro);

    ponteiro = &n;

    printf("\n\nDepois da troca (n): %i", n);
    printf("\nDepois da troca (ponteiro): %i", *ponteiro);
    printf("\nendereço ponteiro: %d", ponteiro);
}