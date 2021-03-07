#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float k;

    printf("\n \t---- KM/H PARA M/S----\t \n");

    printf("\n Digite a velocidade (km/h): "); scanf("%f",&k);
    printf("\n %.3f km/h equivale a %.2f m/s", k, k/3.6);


    printf("\n \n");

    return 0;

}
