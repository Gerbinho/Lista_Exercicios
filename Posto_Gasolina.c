#include <stdio.h>

int main(){
    int opc, litros;
    printf("Digite o tipo de combustivel:\n[ 1 ] - Gasolina R$5,30\n[ 2 ] - Etanol R$4,30\n[ 3 ] - Diesel R$6,05\n");
    scanf("%d",&opc);

    printf("Quantos litros deseja?\n");
    scanf("%d",&litros);

    switch (opc)
    {
    case 1:
        printf("Valor total: %.2f\n",litros*5.3);
        break;
    case 2:
        printf("Valor total: %.2f\n",litros*4.3);
        break;
    case 3:
        printf("Valor total: %.2f\n",litros*6.05);
        break;
    default:
        printf("Digite uma opcao valida!\n");
        break;
    }
    return 0;
}