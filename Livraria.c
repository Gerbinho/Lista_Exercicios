#include <stdio.h>

typedef struct{
    char nome[30];
    int ano_p;
}Livro;

Livro livros[8];

int main(){
    for(int i =0;i< 8;i++){
        printf("Digite o nome do livro %d:\n",i+1);
        scanf("%s",livros[i].nome);
        printf("Digite o ano de publicacao do livro %d:\n",i+1);
        scanf("%d",&livros[i].ano_p);
    }
    for(int i=0;i<8;i++){
        if(livros[i].ano_p<2000){
            printf("Livro: %s\n\n",livros[i].nome);
        }
    }
    return 0;
}
