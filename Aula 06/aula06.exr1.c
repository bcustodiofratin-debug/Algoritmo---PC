
#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_CTYPE,"");

    int cpf, i;
    float preco, total_compra;

    printf("Qual o seu Cpf? ");
    scanf("%d", &cpf);


    for (i=0; i<=5; i++){
        printf("Defina o preço do item: ");
        scanf("%f", &preco);
        total_compra = total_compra + preco;
    }


    printf("O total de compra é: %.2f", total_compra);


    return 0;
}
