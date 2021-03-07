#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float g;

    printf("\n \t---- DE GRAUS PARA RADIANAOS ----\t \n");

    printf("\n Digite o valor do ângulo em graus: "); scanf("%f",&g);
    printf("\n %.4frad", g * 3.14 / 180);


    printf("\n \n");

    return 0;

}
