#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float n,p;

    printf("===========  CALCULADORA DE POT�NCIA DE DOIS(�) =========== \n\n");
    printf("Digite um n�mero:");
    scanf("%f",&n);

    p = n*n;
    printf("Resultado: %.0f\n\n",p);

    return 0;
}
