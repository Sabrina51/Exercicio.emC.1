#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("\n \t---- DIVIS�O DO PR�MIO ----\t \n");
    printf("\n O pr�mio foi no valor de R$780.000,00. \n\n Segue a divis�o para os tr�s ganhadores:\n");

    printf("\n O primeiro ganhador receber� R$%.3f", 780.000*0.46);
    printf("\n O segundo ganhador receber� R$ %.3f", 780.000*0.32);
    printf("\n O terceiro ganhador receber� R$%.3f",780.000*0.22);

    printf("\n \n");

    return 0;

}
