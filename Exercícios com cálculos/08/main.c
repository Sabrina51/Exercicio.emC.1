#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    // m - metragem, nd - numero de demão, r - rendimento por metro quadrado, c - conssumo de galões,
    float m, nd, r,c;

    printf("========== Orçamento de Galões de Tinta ==========\n");

    printf("\nMetragem da Área(m²):");
    scanf("%f",&m);

    printf("\nNúmero de demães:");
    scanf("%f",&nd);

    printf("\nRendimente m²/galão:");
    scanf("%f",&r);

    c=(m*nd)/r;

    printf("\nConssumo de galão: %.0f\n",c);

    return 0;
}

