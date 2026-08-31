#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){

    setlocale(LC_CTYPE, "");

    float a, b, c, x1, x2, delta;
    printf("Digite o valor do a: ");
    scanf("%f", &a);

    printf("Digite o valor do b: ");
    scanf("%f", &b);

    printf("Digite o valor do c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    x1= (-b + sqrt(delta)) / (2*a);

    x2= (-b - sqrt(delta)) / (2*a);

    printf("Raizes da equação:");
    printf("x1 = %.2f", x1);
    printf("x2 = %.2f", x2);
    return 0;
}
