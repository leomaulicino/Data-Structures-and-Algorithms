#include<stdio.h>

int main(){
    int qnt_notas;
    printf("Quantas notas voce deseja calcular? ");
    scanf("%d", &qnt_notas);

    float notas[qnt_notas];
    float soma = 0;

    for(int i = 0; i < qnt_notas; i++){
    printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    soma = soma + notas[i];
    }
    printf("A media das %d notas e: %.2f", qnt_notas, soma / qnt_notas);
return 0;
}