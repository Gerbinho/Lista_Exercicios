#include <stdio.h>

int main(){
    int opc;
    do{
        printf("Digite quantos filmes deseja alugar:\n");
        scanf("%d",&opc);
        if(opc<1 || opc>5){
            printf("Opcao Invalida!\n");
        }else{
            printf("Filmes Alugados!\n");
        }
    }while(opc<1||opc>5);
    return 0;
}