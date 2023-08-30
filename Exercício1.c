#include<stdio.h>

main(){

/* 1 - Leia a idade e imprima se a pessoa é maior de idade.*/

//variáveis
int idade, referencia = 18;

//informação inicial
printf("Cadastro Ze Delivery");

//entrada do dado
printf("\n Informe a sua idade:"),
scanf("%d", &idade);

//operação e saída
if(idade >= referencia){
    printf("Voce e maior de idade e pode continuar o cadastro");
} else{
    printf("Voce e menor de idade e o seu cadastro foi interrompido");
}

}