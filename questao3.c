#include <stdio.h>

/* Questão 3 - Desenvolva um algoritmo em C, que leia um numero inteiro,
armazene-o em uma variável do tipo inteiro, converta a variável do tipo inteiro
para um determinado tipo variável do tipo ponteiro, atribua um valor para esse
tipo. Exiba o formato após essa atribuição. */


int main() {

    int numero;
    int * ponteiro;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    numero = (int *)&ponteiro; 

    *ponteiro = 10;  

    printf("Valor do ponteiro: %d\n", * ponteiro);
    printf("Endereco do ponteiro: %d\n", (int *)ponteiro);
  
}