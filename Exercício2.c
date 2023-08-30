#include<stdio.h>

main(){

/* 2 - leia o salário e imprima se a pessoa ganha mais que um salário mínimo.*/

//variáveis 
float salario, referencia = 1320;

//informação inicial
printf("Folha de pagamento");

//entrada do dado
printf("\n Informe o salario do funcionario:");
scanf("%f", &salario);

//operação e saida
if(salario >= referencia){
    printf("Esta tudo certo, voce ganha pelo menos um salario minimo");
} else{
    printf("O seu salario deve ser corrigido. Voce ganha menos que um salario minimo");
}

}