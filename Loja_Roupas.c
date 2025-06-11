#include <stdio.h>

int main(){
    int opc;
    do{
        printf("[ 1 ] - Camisa\n[ 2 ] - Calca\n[ 3 ] - Casaco\n[ 0 ] - Sair\nSelecione uma opcao\n");
        scanf("%d",&opc);
        
        switch (opc)
        {
        case 1:
            printf("Camisa - R$80,00\n");
            break;
        case 2:
            printf("Calca - R$120,00\n");
            break;
        case 3:
            printf("Casaco - R$200,00\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }while(opc!=0);
    return 0;
}