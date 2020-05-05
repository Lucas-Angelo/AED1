#include <stdio.h>
#include <stdlib.h>

int main()
{

    int anoDeNasc, anoAtual, anos, meses, semanas, dias;

    printf("Programa para calcular anos, meses, semanas e dias de idade!\n");

    printf("Qual o seu ano de nascimento(Ex: 2010): ");
    scanf("%d", &anoDeNasc);

    printf("Qual o ano atual(Ex 2020)? ");
    scanf("%d", &anoAtual);

    anos = anoAtual - anoDeNasc;
    meses = anos * 12;
    semanas = anos * 52;
    dias = anos * 365;


    printf("Voce tem %d anos de idade.\n", anos);
    printf("Voce tem %d meses de idade.\n", meses);
    printf("Voce tem aproximadamente %d semanas de idade.\n", semanas);
    printf("Voce tem aproximandamente %d dias de idade.\n", dias);


    system("PAUSE");
    return 0;
}
