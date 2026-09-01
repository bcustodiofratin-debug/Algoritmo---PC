#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){

    setlocale(LC_CTYPE, "");
   int nota1,nota2,media;
   printf("Digite a nota 1: ");
   scanf("%d", &nota1);

   printf("Digite o nota 2: ");
   scanf("%d", &nota2);

   media = (nota1 + nota2)/2;

   if (media >=6){
    printf("Você foi aprovado!!", media);
   }
    else if (media >= 3.0){
    printf("Você está de exame!!!", media);
    }
    else{
    printf("Você foi reprovado!!!", media);
    }
    return 0;
}












