#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float ap1,ap2,lp1,lp2,t1,t2;
    float m, p1, p2, t;

    printf("\n\n========== Cálculadora de Metragem m² ==========\n\n");


    printf("Largura parede 1 (m):");
    scanf("%f",&lp1);

    printf("Altura parede 1 (m):");
    scanf("%f",&ap1);

    printf("largura parede 2 (m):");
    scanf("%f",&lp2);

    printf("Altura parede 2 (m):");
    scanf("%f",&ap2);

    printf("Digite lado 1 do teto (m):");
    scanf("%f",&t1);

    printf("Digite lado 2 do teto (m):");
    scanf("%f",&t2);

    p1=(lp1*ap1)*2;
    p2=(lp2*ap2)*2;
    t=(t1*t2);
    m=p1+p2+t;

    printf("Metragem da Área: %.2f",m);


    return 0;
}
