#include <stdio.h>
#include <math.h>
//Escreva um programa que leia o peso e a altura de uma pessoa. Em seguida o programa
//deve calcular e imprimir índice de massa corpórea (IMC) dessa pessoa. 
int main (void){

double peso, height, imc;

printf("Para calcular o IMC insira: \n\nPeso: ");
scanf("%lf", &peso);

printf("Altura: ");
scanf("%lf", &height);

imc = peso / pow(height,2);

printf("Valor do IMC: %.2lf", imc);

return 0;

}
