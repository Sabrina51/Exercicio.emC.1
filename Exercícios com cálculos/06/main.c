#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, nsalario, aumento;

    printf("------------------- Cálculo de acrescimo de 25%% no salário -------------------\n");

    printf("\nDigite o valor do salário atual (R$): ");
    scanf("%f",&salario);

    aumento=0.25*salario;
    nsalario=aumento+salario;

    printf("\nNovo salário (R$): %.2f\n",nsalario);


    return 0;
}
