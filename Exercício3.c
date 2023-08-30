#include<stdio.h>

main(){

/* 3/4 - Leia a aultura e o peso e imprima se a pessoa é maior que 1.8m e tem mais de 60Kg.*/

//variáveis
float altura, peso, refAltura = 180, refPeso = 60; 

//informação inicial
printf("Alistamento militar");

//entrada dos dados
printf("\n Informe a sua aultura em centimetros:");
scanf("%f", &altura);
printf("\n Digite o seu peso:");
scanf("%f", &peso);

//operações e saída
if(altura > refAltura && peso > refPeso){
    printf("Voce tem mais que 1.8m e peso superior a 60Kg. Portanto voce nao foi dispensado");
} else{
    printf("Voce tem menos que 1.8m e (ou) peso inferior a 60Kg. Portanto voce esta dispensado");
}

}