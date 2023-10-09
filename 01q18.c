#include <stdio.h>
//Faça um programa para converter um dado valor em reais (R$) para a moeda dólar (US$). O
//programa deve ler um valor em reais (R$) e a cotação da moeda americana, depois converter para
//dólares (US$) e apresentar este valor convertido na tela.
int main(void){
float cot_dolar, valor_reais, valor_dolar;

printf("Insira cotação do dólar atual:\n");
scanf("%f", &cot_dolar);

printf("Valor em reais a ser convertido:\n");
scanf("%f", &valor_reais);

valor_dolar = valor_reais * cot_dolar;

printf("R$%.2f convertido para dólar U$%.2f", valor_reais, valor_dolar);

return 0;

}
