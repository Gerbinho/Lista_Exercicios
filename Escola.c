#include <stdio.h>

float notas[4];
float med, soma;

int main(){
    for(int i = 0;i<5;i++){
        printf("Aluno %d: \n", i+1);
        soma=0;
        for(int j = 0;j<4;j++){
        printf("Digite a nota %d\n", j+1);
        scanf("%f", &notas[j]);
        soma += notas[j];
        }
        med = soma / 4;
        printf("O Aluno %d tem a media é: %.2f\n", i+1, med);
        if(med>=6){
            printf("O aluno esta aprovado\n");
        }else{
            printf("O aluno esta reprovado\n");
        }
    }
    return 0;
}

