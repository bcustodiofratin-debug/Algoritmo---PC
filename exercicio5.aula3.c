#include<stdio.h>
#include<locale.h>

float main()
{
    setlocale(LC_CTYPE,"");

    float peso,altura,imc;
    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f", &peso);
    printf("Qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("O índice de Massa Corporal é: %f kg/m²", imc);
    scanf("%f",&imc);

    return 0;
}
