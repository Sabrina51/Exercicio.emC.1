#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    // m - metragem, nd - numero de dem�o, r - rendimento por metro quadrado, c - conssumo de gal�es,
    float m, nd, r,c;

    printf("========== Or�amento de Gal�es de Tinta ==========\n");

    printf("\nMetragem da �rea(m�):");
    scanf("%f",&m);

    printf("\nN�mero de dem�es:");
    scanf("%f",&nd);

    printf("\nRendimente m�/gal�o:");
    scanf("%f",&r);

    c=(m*nd)/r;

    printf("\nConssumo de gal�o: %.0f\n",c);

    return 0;
}

