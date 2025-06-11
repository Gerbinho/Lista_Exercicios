#include <stdio.h>

int main() {
    int ingressos;
    int cliente = 1; // contador de clientes
    const int PONTOS_POR_INGRESSO = 10;

    printf("=== Sistema de Pontos - CinePonto ===\n");

    do {
        printf("\nDigite a quantidade de ingressos comprados pelo cliente %d (0 para sair): ", cliente);
        scanf("%d", &ingressos);

        if (ingressos > 0) {
            int pontos = ingressos * PONTOS_POR_INGRESSO;
            printf("Cliente %d acumulou %d pontos.\n", cliente, pontos);
            cliente++;
        } else if (ingressos < 0) {
            printf("Quantidade inválida. Digite um número positivo.\n");
        }

    } while (ingressos != 0);

    printf("\nCadastro encerrado. Obrigado por usar o CinePonton!\n");

    return 0;