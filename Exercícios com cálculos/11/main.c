#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float a, r;

    printf("\n \t---- VOLUME DO CILINDRO ----\t \n");

    printf("\n Digite o valor da altura: "); scanf("%f",&a);
    printf("\n Digite o valor do raio: "); scanf("%f",&r);
    printf("\n O volume do cilindro é %.2fm³", 3.14 * pow(r,2) * a);

    printf("\n \n");

    return 0;

}
