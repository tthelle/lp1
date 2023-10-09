#include <stdio.h>

int main (void){
float custo_fab, custo_cons, impostos, porc_distri;
porc_distri = 0.28;
impostos = 0.45;

printf("Insira o custo de fábrica do automóvel:\n");
scanf("%f", &custo_fab);

custo_cons = custo_fab + (custo_fab * impostos) + (custo_fab * porc_distri);

printf("Custo final do automóvel para o consumidor: R$%.2f", custo_cons);

return 0;

}
