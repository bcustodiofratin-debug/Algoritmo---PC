#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_CTYPE,"");

    int num = 1, soma = 0;

    while (num != 0) {

        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num != 0 && num % 2 != 0) {
            soma += num;
        }
    }

    printf("\nA soma dos impares e: %d\n", soma);

    return 0;
}
