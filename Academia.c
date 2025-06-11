#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[20];
    int idade;
    float imc;
}Aluno;

Aluno alunos[20];

int nm_aluno = 0;

void cadastro(); 

int main(){
    do{
        system("cls");
        cadastro();
        getchar();
        getchar();
    }while(nm_aluno<20);
    return 0;
}

void cadastro(){
    printf("Digite seu nome:\n");
    scanf("%s",alunos[nm_aluno].nome);
    printf("Digite sua idade:\n");
    scanf("%d",&alunos[nm_aluno].idade);
    printf("Digite seu IMC:\n");
    scanf("%f",&alunos[nm_aluno].imc);
    if(alunos[nm_aluno].imc>30){
        printf("O aluno %s esta obeso",alunos[nm_aluno].nome);
    }else if(alunos[nm_aluno].imc>25){
        printf("O aluno %s esta sobrepeso",alunos[nm_aluno].nome);
    }else{
        printf("O aluno %s esta saudavel",alunos[nm_aluno].nome);
    }
    nm_aluno++;
}