#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float num1,num2,num3,ponderada, divisao;
    printf("Qual o primeiro numero: ");
    scanf("%f", &num1);

    printf("Qual o primeiro numero: ");
    scanf("%f", &num2);

    printf("Qual o primeiro numero: ");
    scanf("%f", &num3);

    ponderada = (num1*1 + num2*2 + num3*4)/7;
    printf("A média ponderada é: %.2f", ponderada);
    scanf("%f", &ponderada);


    return 0;

}
