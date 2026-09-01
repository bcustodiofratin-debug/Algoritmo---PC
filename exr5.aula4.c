#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){

    setlocale(LC_CTYPE, "");
    float IMC,kg,altura;

    printf("Digite o seu peso(kg): ");
    scanf("%f",&kg);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    IMC = kg/pow(altura,2);

    if (IMC < 20){
        printf("Você está abaixo do peso!");
    }
    else if (IMC >= 20 && IMC < 25){
        printf("Você está com peso normal!");
    }
    else if (IMC >= 25 && IMC < 30){
         printf("Você está com sobrepeso!");
    }
    else if (IMC >= 30 && IMC < 40){
         printf("Você está obeso!");
    }
    else {
         printf("Você está obeso mórbido!");
    }



    return 0;
}
