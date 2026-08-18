#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int rgm = 123456;
    float media = 4.567788;
    printf("Dados do aluno\n");
    printf("RGM: %d\n", rgm);
    printf("Media: %.2f", media);
    return 0;



}
