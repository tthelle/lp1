#include <stdio.h>

int main(void){
float graus_c, graus_f;

printf("Conversor de graus Farenheit para graus Celsius.\n\nGraus em Farenheit:\n");
scanf("%f", &graus_f);

graus_c = (5 * (graus_f - 32)) / 9;

printf("Graus em Celsius: %.2f", graus_c);

return 0;

}
