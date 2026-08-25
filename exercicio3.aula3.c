#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int num1,num2, soma, subtracao,multiplicacao;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1* num2;

    printf("A soma é: %d\n Subtração: %d\n Multiplicação: %d",soma, subtracao, multiplicacao);





    return 0;
}
