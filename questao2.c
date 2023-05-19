#include <stdio.h>
#include <conio.h>

/* Questão 2 - Desenvolva um algoritmo em C, que leia um numero inteiro,
armazene-o em uma variável do tipo inteiro, crie uma uma função por meio de uma
de variável do tipo ponteiro. Exiga o resultdo, antes e apos a chamda da função. */

int dobra( int *n);

int main(){
    
    int *n;


    printf("Digite um número: ");
    scanf("%i", &n);

    printf("\nValor antes da chamada da função: %i", n);

    dobra(&n);

    printf("\nValor depois da chamada: %i", n);

}

int dobra(int *n){

    printf("\nDentro da função sem alteração: %i",*n);

    *n = (*n) * 2;
}