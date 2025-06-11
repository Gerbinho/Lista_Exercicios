#include <stdio.h>

typedef struct{
    char nome[30];
    int cod;
    float preco;
}produto;

produto produtos[5];

int main(){
    for(int i = 0; i < 5;i++){
        printf("Digite o ID do produto %d:\n",i+1);
        scanf("%d",&produtos[i].cod);
        printf("Digite o nome do produto %d:\n",i+1);
        scanf("%s",produtos[i].nome);
        printf("Digite o valor do produto %d:\n",i+1);
        scanf("%f",&produtos[i].preco);
    }
    for(int i = 0; i < 5;i++){
        if(produtos[i].preco > 10){
            printf("Produto %s (Cod: %d) - R$%.2f\n\n",produtos[i].nome,produtos[i].cod,produtos[i].preco);
        }
    }
    return 0;
}