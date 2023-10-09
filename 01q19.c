#include <stdio.h>

int main(void){
float km_rodado, preco_a, preco_b, km_a, km_b;
int diaria_a, diaria_b;

diaria_a = 62;
km_a = 1.4;
diaria_b = 80;
km_b = 1.2;

printf("Analise os preços da Agência A e da Agência B, e veja quall será mais proveitosa para a sua viagem!\n\nInsira quantos quilômentros serão rodados: \n");
scanf("%f", &km_rodado);

preco_a = diaria_a + (km_a * km_rodado);
preco_b = diaria_b + (km_b * km_rodado);

printf("Preço da Agência A: R$%.2f.\nPreço da Agência B: R$%.2f", preco_a, preco_b);

return 0;

}
