#include <stdio.h>

int main (void){
const int gotas = 5;
float peso, total_gotas;

printf("Para calcular a dosagem de gotas de remédio para crianças.\nInsira peso da criança (em Kg):\n");
scanf("%f", &peso);

total_gotas = (peso / 2) * gotas;

printf("Quantidade de gotas a ser tomada: %.0f gotas.", total_gotas);

return 0;

}
