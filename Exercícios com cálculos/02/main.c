#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float c, vr, vd = 5.68;
    printf("===========  CALCULADORA DE CONVERSÃO DE MOEDA (Real x Dolar) =========== \n\n");
    printf("Digite o valor em Real(R$):");
    scanf("%f",&vr);
    c = vr * vd;
    printf("Valor em Dolar ($): %.2f\n\n",c);

    printf("*******  Dolar Estadunidense - Cotação referente ao dia 05/03/2021.  *******\n\n");


    return 0;
}
