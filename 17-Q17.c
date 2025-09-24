#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor1, valor2;
    char resto;

    printf("Digite 2 valores válidos abaixo. \n");
    if (scanf("%d%d%c", &valor1, &valor2, &resto) != 3 || resto != '\n')
    {
        printf("Você digitou um valor inválido, tente novamente. \n");
        return 1;
    }

    if (valor1 == valor2)
    {
        printf("Você digitou 2 valores iguais. \n");
    } else
    {
        if (valor1 > valor2)
        {
            printf("Os valores digitados são diferentes e %d é maior que %d. \n", valor1, valor2);
        } else
        {
            printf("Os valores digitados são diferentes e %d é maior que %d. \n", valor2, valor1);
        }
           
    }

    system("pause");
    return 0;
}
