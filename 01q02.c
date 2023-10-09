#include <stdio.h>

int main () {
double a, b, c, aux;

printf("Expressão A: 6 x (2 + 3) / (4 + 5). \n"); 

a = 6 * (2 + 3);
aux = 4 + 5;
a = a / aux;

printf("Resultado: %.2lf.\n", a);
printf("\n");
printf("Expressão B: 6 x 2 + 3 / 4 + 5. \n");

b = 6 * 2;
aux = (double)3 / 4;
b = b + aux + 5;

printf("Resultado: %.2lf.\n", b);
printf("\n");
printf("Expressão C: (45 / 7) x 5² + 6 x 3 + 4.\n");

c = (double) 45 / 7;
aux = pow(5,2) + 6 * 3;
c = c * aux + 4;

printf("Resultado: %.2lf.\n", c);

return 0;
}
