#include <stdio.h>

typedef struct{
    char tipo[20],nome[20];
    int idade;
}Animal;

Animal animais[6];

void ver_idade();

int main(){
    for(int i = 0;i <6;i++){
        printf("Digite o tipo do animal:\n");
        scanf("%s",animais[i].tipo);
        printf("Digite o nome do animal:\n");
        scanf("%s",animais[i].nome);
        printf("Digite a idade do animal:\n");
        scanf("%d",&animais[i].idade);
    }
    ver_idade();
    return 0;
}
void ver_idade(){
    for(int i = 0;i<6;i++){
        if(animais[i].idade>5){
            printf("%s: %s\n\n",animais[i].tipo,animais[i].nome);
        }
    }
}