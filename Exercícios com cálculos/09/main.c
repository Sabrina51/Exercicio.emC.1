#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salariob, nsalario, g, i;
    char retorno;


    printf("\n------------------- Cálculo de Salário ----------------------\n");
    printf("-----\t\t\t\t\t\t\t-----\n");
    printf("-----\tGratificação de 5%% e imposto recolhido de 7%%\t-----\n");
    printf("-----\t\t\t\t\t\t\t-----\n");
    printf("-------------------------------------------------------------\n");

        do {
        printf("\n\tDigite o valor do salário base (R$): ");
        scanf("%f",&salariob);

        g=0.05*salariob;
        i=0.07*salariob;
        nsalario=salariob+g-i;

        printf("\n\tNovo salário (R$): %.2f\n",nsalario);

        printf("\n-----\tDeseja realizar outro cálculo(s/n)?");
        scanf(" %c", &retorno);

        }while (retorno == 's');

    return 0;
}
