#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;

    printf("\n \t---- EM QUE ANO VOCÊ NASCEU?----\t \n");

    printf("\n Qual a sua idade: "); scanf("%d",&i);
    printf("\n Você nasceu em %d", 2020-i);


    printf("\n \n");

    return 0;
}
