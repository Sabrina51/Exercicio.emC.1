#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int x1, x2, d, a, b, c;

    printf("\n---------------- EQUA��O ----------------\n");
    printf("\n Forma da equa��o ax�+bx + c = 0 \n");

    printf("\n Digite o coeficiente a: "); scanf("%d", &a);
    printf("\n Digite o coeficiente b: "); scanf("%d", &b);
    printf("\n Digite o coeficiente c: "); scanf("%d", &c);

    d=((pow(b,2))-4*(a*c));

    x1 = (-(b)+sqrt(d))/(2*a);
    x2 = (-(b)-sqrt(d))/(2*a);

    printf("\n Delta � igual a: %d\n", d);
    printf("\n X1 � igual a: %d\n", x1);
    printf("\n X2 � igual a: %d\n", x2);

    if (d>0)
        {
        printf("\n Equa��o possui duas ra�zes reais e distintas");
        }
    else if (d==0)
        {
        printf("\n A equa��o possui ra�zes reais iguais");
        }
    else
        {
        printf("\n A equa��o n�o possui ra�zes reais");
        }

        printf("\n \n");

    return 0;
}
