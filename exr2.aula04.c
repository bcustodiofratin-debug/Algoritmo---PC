#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){

    setlocale(LC_CTYPE, "");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num %2==0){
    printf("O número é par!");
    scanf("%d",&num);
    }
    else (num %2!=0);{
    printf("O número e impar! ");
    scanf("%d",&num);

}
    return 0;
}








