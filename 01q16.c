#include <stdio.h>
#include <math.h>
//sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-
//se usar 18 W de potência. Escreva um algoritmo que leia as dimensões de um cômodo retangular
//(em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser
//utilizada.
int main(void){

float comprimento, largura, area, pot_total;
int pot;
pot = 18;

printf("Para identificar a potência de iluminação necessária em determinado cômodo, insira: \n\nComprimento do cômodo (em metros):\n");
scanf("%f", &comprimento);

printf("Lagura do cômodo (em metros):\n");
scanf("%f", &largura);

area = comprimento * largura;
pot_total = pot * area;

printf("Potência de iluminação que deve ser usada no cômodo: %.2fW", pot_total);

return 0;

}
