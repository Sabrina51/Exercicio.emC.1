#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float r;

    printf("\n \t---- �REA DO C�RCULO ----\t \n");

    printf("\n Digite o valor do raio: "); scanf("%f",&r);
    printf("\n A �rea do c�rculo � %.2fcm�", 3.14 * pow(r,2));

    printf("\n \n");

    return 0;

}
