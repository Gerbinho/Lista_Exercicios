#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    printf("--- Cafeteria Cafe com Letras ---\n");

    for (i=1;i<=7;i++) {
        do {
            printf("Digite a nota do cliente %d (0 a 10): ", i);
            scanf("%f",&nota);
            if (nota<0||nota>10) {
                printf("Nota invalida!\n");
            }
        } while (nota<0||nota>10);

        soma += nota;
    }
    media = soma / 7;
    printf("\nMédia das notas: %.2f\n", media);

    if (media>=8) {
        printf("Avaliacao: Boa\n");
    } else if (media>=5) {
        printf("Avaliacao: Razoavel\n");
    } else {
        printf("Avaliacao: Ruim\n");
    }

    return 0;
}