#include <stdio.h>

int main(void){
double val, desc, val_desc, val_total;

printf("Insira valor incial da mercadoria:\n");
scanf("%lf", &val);

printf("Porcentagem de desconto sobre a mercadoria:\n");
scanf("%lf", &desc);

desc = desc * 0.01;
val_desc = val * desc;
val_total = val - val_desc;

printf("\nValor descontado: R$%.2lf\nValor final do produto: R$%.2lf\n", val_desc, val_total);

return 0;

}
