#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float num1,num2,num3,num4,Total;
    printf("Qual o primeiro numero: ");
    scanf("%f", &num1);

    printf("Qual o primeiro numero: ");
    scanf("%f", &num2);

    printf("Qual o primeiro numero: ");
    scanf("%f", &num3);

    printf("Qual o primeiro numero: ");
    scanf("%f", &num4);

    Total = (num1 + num2 + num3 + num4)/4;
    printf("A media aritmetica é: %.2f", Total);
    scanf("%f", &Total);
    return 0;
}
