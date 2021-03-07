#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("\n \t---- DIVISÃO DO PRÊMIO ----\t \n");
    printf("\n O prêmio foi no valor de R$780.000,00. \n\n Segue a divisão para os três ganhadores:\n");

    printf("\n O primeiro ganhador receberá R$%.3f", 780.000*0.46);
    printf("\n O segundo ganhador receberá R$ %.3f", 780.000*0.32);
    printf("\n O terceiro ganhador receberá R$%.3f",780.000*0.22);

    printf("\n \n");

    return 0;

}
