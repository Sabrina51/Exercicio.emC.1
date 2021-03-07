#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float r;

    printf("\n \t---- ÁREA DO CÍRCULO ----\t \n");

    printf("\n Digite o valor do raio: "); scanf("%f",&r);
    printf("\n A área do círculo é %.2fcm²", 3.14 * pow(r,2));

    printf("\n \n");

    return 0;

}
