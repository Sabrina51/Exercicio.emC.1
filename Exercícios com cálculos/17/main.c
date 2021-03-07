#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float c;

    printf("\n \t---- DE °C PARA °F ----\t \n");

    printf("\n Digite a temperatura (°C): "); scanf("%f",&c);
    printf("\n %.1f°C equivale a %.1f°F", c, c*(9.0/5.0)+32.0);


    printf("\n \n");

    return 0;

}
