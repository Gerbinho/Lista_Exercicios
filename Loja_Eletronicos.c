#include <stdio.h>

int main(){
    float produtos[10], maior, menor;
    for(int i=0;i<=9;i++){
        printf("Digite o valor do produto %d:\n",i+1);
        scanf("%f",&produtos[i]);
    }
    maior = produtos[0];
    menor = produtos[0];
    for(int i=0;i<=9;i++){
        if(produtos[i]>=maior){
            maior = produtos[i];
        }
        if(produtos[i]<=menor){
            menor = produtos[i];
        }
    }
    printf("O produto mais caro custa: R$%.2f\n",maior);
    printf("O produto mais barato custa: R$%.2f\n",menor);
    return 0;
}