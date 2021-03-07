#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float a, b;

    printf("\n \t---- CÁLCULO DA HIPOTENUSA ----\t \n");

    printf("\n Digite o cateto a: "); scanf("%f",&a);
    printf("\n Digite o cateto b: "); scanf("%f",&b);
    printf("\n A hipotenusa é %.0f", sqrt(pow(a,2) + pow (b,2)));

    printf("\n \n");

    return 0;

}
