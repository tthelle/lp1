#include <stdio.h>

int main(void) {
double b_maior, b_menor, height, area;

printf("Vamos calcular a área de um trapézio! \n \nInsira o valor da base maior do trapézio: \n");
scanf("%lf", &b_maior);

printf("Agora insira o valor da base menor desse trapézio: \n");
scanf("%lf", &b_menor);

printf("Último passo! Me diz qual é a altura desse trapézio: \n");
scanf("%lf", &height);

area = (double) ((b_maior + b_menor) * height) / 2;

printf("Prontinho! A área do trapézio é: %.2lf.", area);

return 0;}
