#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor1, valor2;
    char resto;

    printf("Digite 2 valores v�lidos abaixo. \n");
    if (scanf("%d%d%c", &valor1, &valor2, &resto) != 3 || resto != '\n')
    {
        printf("Voc� digitou um valor inv�lido, tente novamente. \n");
        return 1;
    }

    if (valor1 == valor2)
    {
        printf("Voc� digitou 2 valores iguais. \n");
    } else
    {
        if (valor1 > valor2)
        {
            printf("Os valores digitados s�o diferentes e %d � maior que %d. \n", valor1, valor2);
        } else
        {
            printf("Os valores digitados s�o diferentes e %d � maior que %d. \n", valor2, valor1);
        }
           
    }

    system("pause");
    return 0;
}