#include <stdio.h>

int main(){
    int opc,ocup=0;
    for(int i = 0;i < 10;i++){
        printf("O quarto %d esta ocupado?[ 1 ] - Sim [ 0 ] - Nao\n",i+1);
        scanf("%d",&opc);
        if(opc == 1){
            ocup++;
        }
    }
    printf("Porcentagem de ocupacao: %d%%",(ocup*100)/10);
    return 0;
}