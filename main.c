#include <stdio.h>
#define MAX 5
void inserir(int lista[], int *tamanho, int valor){
    if (*tamanho < MAX){
        lista [*tamanho] = valor;
        (*tamanho)++;
    } else {
        printf("Lista cheia!");

    }
}

void exibir(int lista[], int tamanho){
    printf("Elementos da lista: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista [MAX];
    int tamanho = 0;
    inserir(lista, &tamanho, 3);
    inserir(lista, &tamanho, 22);
    inserir(lista, &tamanho, 127);
    inserir(lista, &tamanho, 24);
    inserir(lista, &tamanho, 521);
    inserir(lista, &tamanho, 0);

    exibir(lista, tamanho);
    return 0;
}
