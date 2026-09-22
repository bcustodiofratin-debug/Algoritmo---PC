#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){

    setlocale(LC_CTYPE, "");
    char opcao;
    int num_diarias;
    float total_pagar;
    printf("Hospedagem Anália\n");
    printf("[S] Quarto simples\n");
    printf("[D] Quarto duplo\n");
    printf("[T] Quarto triplo\n");
    printf("Qual o tipo de hospedagem?\n ");
    scanf(" %c", &opcao);

    printf("Qual a quantidade de diarias: ");
    scanf("%d", &num_diarias);
    if(opcao == 's' || opcao == 'S' ){
    printf("Total a pagar R$: %.2d ", (num_diarias*300));
    }
    else if(opcao == 'd' || opcao == 'D'){
        printf("Total a pagar R$: %.2d ", (num_diarias*450));
    }
    else if (opcao == 't' || opcao == 'T'){
        printf("Total a pagar R$: %.2d ", (num_diarias*600));
    }
    else{
        printf("Não temos essa opção!");
    }







    return 0;
}
