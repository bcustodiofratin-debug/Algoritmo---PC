#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int hora, minuto, conta;
    printf("Horas: ");
    scanf("%d", &hora);

    printf("Minutos:" );
    scanf("%d", &minuto);

    conta = (hora * 60) + minuto;
    printf("Já se passaram: %d", conta);
    scanf("%d", &conta);
    return 0;

}
