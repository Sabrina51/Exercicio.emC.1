#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float n;

    printf("\n \t---- A QUINTA PARTE----\t \n");

    printf("\n Digite um n�mero real: "); scanf("%f",&n);
    printf("\n A quinta parte de %f � %f ",n,n/5);


    printf("\n \n");

    return 0;
}
