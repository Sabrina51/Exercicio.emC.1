#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, nsalario, aumento;

    printf("------------------- C�lculo de acrescimo de 25%% no sal�rio -------------------\n");

    printf("\nDigite o valor do sal�rio atual (R$): ");
    scanf("%f",&salario);

    aumento=0.25*salario;
    nsalario=aumento+salario;

    printf("\nNovo sal�rio (R$): %.2f\n",nsalario);


    return 0;
}
