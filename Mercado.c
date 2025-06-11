#include <stdio.h>

typedef struct
{
    char nome[20];
    int quantidade;
    float vl;
}produto;

produto produtos[10];

void vlt_produtos();

int main(){
    vlt_produtos();
    return 0;
}
void vlt_produtos(){
    float vlt=0;
    for(int i = 0;i < 10;i++){
        printf("Digite o nome do produto %d:\n",i+1);
        scanf("%s",produtos[i].nome);
        printf("Digite a quantidade do produto %d:\n",i+1);
        scanf("%d",&produtos[i].quantidade);
        printf("Digite o valor do produto %d:\n",i+1);
        scanf("%f",&produtos[i].vl);
    }
    for(int i=0; i < 10;i++){
        vlt+= produtos[i].quantidade * produtos[i].vl;
    }
    printf("O valor total do estoque e de R$%.2f",vlt);
}

