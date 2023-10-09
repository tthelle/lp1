#include <stdio.h>

int main(void){
int qnt_prod;
float preco_prod, preco_total, porc_impst, total_impst;

printf("Quantidade de produtos produzida:\n");
scanf("%d", &qnt_prod);

printf("Preço da unidade de produto:\n");
scanf("%f", &preco_prod);

printf("Porcentagem de imposto aplicado:\n");
scanf("%f", &porc_impst);

preco_total = preco_prod * qnt_prod;
total_impst = preco_total * (porc_impst / 100);

printf("Valor do imposto total a ser pago: R$%.2f", total_impst);

return 0;
}
