#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float largura,comprimento,caixa, total,area,quant;
    printf("Qual é a largura da área? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da área em metros? ");
    scanf("%f", &comprimento);

    printf("Qual é o valor da caixa? ");
    scanf("%f", &caixa);

    area = comprimento * largura;
    quant = area /2.5;
    total = ceil(quant)*caixa;

    printf("Área total: %f\n Quantidade: %f\n Custo total: %.0f",area,quant,total);

    return 0;
}
