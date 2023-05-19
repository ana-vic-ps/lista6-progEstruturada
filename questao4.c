#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 10

/* Questão 4 - Desenvolva um algoritmo em C, que leia o conteúdo de váriaveis ponteiro do tipo inteiro, armazene-as em
uma estrutura do tipo pilha, manipula os valores e exiba-os. */


typedef struct {
    int pilha[TAMANHO_MAX];
    int topo;
} Pilha;

void inicializarPilha(Pilha *pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha *pilha) {
    return (pilha->topo == -1);
}

int pilhaCheia(Pilha *pilha) {
    return (pilha->topo == TAMANHO_MAX - 1);
}

void push(Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: pilha cheia.\n");
        return;
    }
    pilha->topo++;
    pilha->pilha[pilha->topo] = valor;
}

int pop(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: pilha vazia.\n");
        return -1;
    }
    int valor = pilha->pilha[pilha->topo];
    pilha->topo--;
    return valor;
}

void exibirPilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia.\n");
        return;
    }
    printf("Conteudo da pilha:\n");
    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d\n", pilha->pilha[i]);
    }
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int *ponteiro1, *ponteiro2, *ponteiro3;
    int valor1, valor2, valor3;

    printf("Digite o valor para ponteiro1: ");
    scanf("%d", &valor1);
    printf("Digite o valor para ponteiro2: ");
    scanf("%d", &valor2);
    printf("Digite o valor para ponteiro3: ");
    scanf("%d", &valor3);

    ponteiro1 = (int *)malloc(sizeof(int));
    ponteiro2 = (int *)malloc(sizeof(int));
    ponteiro3 = (int *)malloc(sizeof(int));

    *ponteiro1 = valor1;
    *ponteiro2 = valor2;
    *ponteiro3 = valor3;

    push(&pilha, *ponteiro1);
    push(&pilha, *ponteiro2);
    push(&pilha, *ponteiro3);

    exibirPilha(&pilha);

    free(ponteiro1);
    free(ponteiro2);
    free(ponteiro3);

    return 0;
}