#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float n1,n2,n3,mp,p1,p2,p3, p1n1, p2n2, p3n3, somapn, somapeso;
    printf("=====================  CALCULADORA DE MÉDIA PONDERADA =====================");
    printf("\nA média para aprovação é 6.");
    printf("\n===========================================================================\n\n");


    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite o peso 1: ");
    scanf("%f",&p1);

    printf("\nDigite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite o pesos 2: ");
    scanf("%f",&p2);

    printf("\nDigite a terceira nota: ");
    scanf("%f",&n3);
    printf("Digite o pesos 3: ");
    scanf("%f",&p3);

    p1n1 = (p1*n1);
    p2n2 = (p2*n2);
    p3n3 = (p3*n3);
    somapn = p1n1 + p2n2 + p3n3;
    somapeso = (p1+p2+p3);
    mp = somapn/somapeso;

    printf("\nMédia: %.1f\n\n",mp);

    if(mp>=6)
    {
        printf("APROVADO! :D\n");
    }
    else
    {
        printf("REPROVADO! :(\n\n");
    }

    return 0;
}
