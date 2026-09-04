#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    int rm;
    char nome[50];
    float media;
}Aluno;

void atualizarNota(Aluno aluno, float valor){
    if(valor >= 0 && valor<= 10){
        aluno.media = valor;
    }else{
        printf("Nota inexistente");
    }
}

int main(){
    Aluno aluno1 = {123, "Leo", 9.0};
    //aluno1.rm = 234;
    //printf("%d", aluno1.rm);
    Aluno*ptr = &aluno1;
    printf("%p\n", ptr->rm);
    printf("%p\n", ptr->nome);
    printf("%p", ptr->media);

    ptr->rm = 234;
    printf("$d\n", ptr->rm);
    printf("$p\n", &ptr->rm);

    return 0;
}