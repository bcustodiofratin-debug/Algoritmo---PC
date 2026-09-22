#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_CTYPE,"");
    int tentativas =3,senha =123,conta= 12345, user,pass;

    while(1){
        printf("Quem é o usuario? ");
        scanf("%d", &user);
        printf("Qual é a senha? ");
        scanf("%d", &pass);

    if (user == conta && pass == senha){
        printf("Logado");
        break;
    }else if(tentativas>1){
        tentativas--;
        printf("Dados incorretos!");
        printf("Você ainda tem %d tentativas", tentativas);
   } else{
        printf("Usuario bloqueado");
        break;
    }
    }



     return 0;

    }








