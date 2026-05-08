#include<stdio.h>

int main(){
    /*Criar uma interface com o usuario, onde terá duas opções:
    1- média aluno --> média = (nota 1 + nota 2)/2
    2- verificação de presença --> presença --> >= 75% - > presença adequada
                                                < 75% - > atentar com a presença*/
                                                
    //Declaração de variaveis                                          
    int opcao = 1, presenca;
    float nota_1, nota_2, media;

    //MENU
    printf("---MENU---\n");
    printf("1 - Calculadora de media;\n");
    printf("2 - Calculadora de presenca.\n");
    printf("Selecione uma das opcoes acima: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: /*Lógica, função*/
        printf("---Calculadora de média ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        if(nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
        media = (nota_1 + nota_2)/2;
        printf("A media do aluno e: %.2f. O calculo para o valor da media e (%.2f + %,2f)/2", media, nota_1, nota_2);
        }else{
            printf("Nota fora do limite apresentado!");
        }
        break;
        
        case 2: 
        printf("---VERIFICADOR DE PRESENÇA---");
        printf("Digite a frequencia do aluno (0-100)");
        scanf("%d", &presenca);
        if(presenca >= 75 && presenca <=100){
            printf("O aluno esta sem pendencia na presenca, a frequencia e de %d%%");
        }else if (presenca >= 0){
            printf("O aluno esta com pendencia na presenca, a frequencia e de %d%%");
        }else{
            printf("Valor de frequencia invalido!");
        }
        break;
        default:
        printf("Opcao invalida!");
    }
    return 0;
}