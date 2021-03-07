#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float n1,n2,m;
    printf("\n ===========  CALCULADORA DE MÉDIA ARITMÉTICA =========== \n\n");
    printf("\n Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("\n Digite a segunda nota: ");
    scanf("%f",&n2);
    m = (n1+n2)/2;
    printf("\n Média: %.1f\n\n",m);

    if(m>=6)
    {
        printf("\n APROVADO! :D\n");
    }
    else
    {
        printf("\n REPROVADO! :(\n\n");
    }


    return 0;
}
