#include <stdio.h>

int main(){
    int count,bebida = 0,opc,sobremesa = 0;
    float vlt = 0;
    
    do{
        printf("[ 1 ] - Prato R$50.00\n[ 2 ] - Bebida R$10.00\n[ 3 ] - Sobremesa R$10.00\n[ 0 ] - Finalizar compra\n");
        scanf("%d",&opc);

        switch (opc)
        {
        case 1:
            vlt+=50;
            count++;
            break;
        case 2:
            vlt+=10;
            bebida++;
            break;
        case 3:
            vlt+=10;
            sobremesa++;
        default:
            break;
        }
    }while(opc!=0);

    if(count>3 && (bebida >= 1 && sobremesa >= 1)){
        printf("Valor total: R$%.2f",vlt*0.85);
    }else if(bebida >= 1 && sobremesa >= 1){
        printf("Valor total: R$%.2f",vlt*0.95);
    }else if(count > 3){
        printf("Valor total: R$%.2f",vlt*0.90);
    }else{
        printf("Valor total: R$%.2f",vlt);
    }
    return 0;
}