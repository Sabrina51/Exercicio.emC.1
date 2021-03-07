#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int x1, x2, d, a, b, c;

    printf("\n---------------- EQUAÇÃO ----------------\n");
    printf("\n Forma da equação ax²+bx + c = 0 \n");

    printf("\n Digite o coeficiente a: "); scanf("%d", &a);
    printf("\n Digite o coeficiente b: "); scanf("%d", &b);
    printf("\n Digite o coeficiente c: "); scanf("%d", &c);

    d=((pow(b,2))-4*(a*c));

    x1 = (-(b)+sqrt(d))/(2*a);
    x2 = (-(b)-sqrt(d))/(2*a);

    printf("\n Delta é igual a: %d\n", d);
    printf("\n X1 é igual a: %d\n", x1);
    printf("\n X2 é igual a: %d\n", x2);

    if (d>0)
        {
        printf("\n Equação possui duas raízes reais e distintas");
        }
    else if (d==0)
        {
        printf("\n A equação possui raízes reais iguais");
        }
    else
        {
        printf("\n A equação não possui raízes reais");
        }

        printf("\n \n");

    return 0;
}
