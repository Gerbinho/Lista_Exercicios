#include <stdio.h>

typedef struct{
    float km;
    char marca[20];
    int ano;
}carro;

carro carros[5];

int main(){
    for(int i=0;i<5;i++){
        printf("Digite a marca do carro %d\n",i+1);
        scanf("%s",carros[i].marca);
        printf("Digite o ano do carro %d\n",i+1);
        scanf("%d",&carros[i].ano);
        printf("Digite a quilometragem do carro %d\n",i+1);
        scanf("%f",&carros[i].km);
    }
    for(int i=0;i<5;i++){
        if(carros[i].km<100000){
            printf("%s(%d) - %.2fKMs",carros[i].marca,carros[i].ano,carros[i].km);
        }
    }
    return 0;
}