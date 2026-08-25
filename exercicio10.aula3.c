#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_CTYPE,"");
    float inicial,lancamento, alcance,ang_radianos;
    printf("Qual a velocidade inicial(m/s): ");
    scanf("%f", &inicial);

    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &lancamento);


    ang_radianos = lancamento*(3,14/180);
    alcance =(pow(inicial,2)+ sin(2*ang_radianos))/9.8;
    printf("o alcance horizontal estimado é: %f", alcance);
    scanf("%f", &alcance);










}
