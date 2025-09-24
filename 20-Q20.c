#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor1, valor2, valor3, maior, menor;
    char resto;

    printf("Digite 3 valores válidos abaixo. \n");
    if (scanf("%d%d%d%c", &valor1, &valor2, &valor3, &resto) != 4 || resto != '\n')
    {
        printf("Você digitou um valor inválido, tente novamente. \n");
        return 1;
    }

    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("Você digitou 3 valores iguais. \n");
    }

    else if (valor1 >= valor2 && valor1 >= valor3)
    {
        maior = valor1;
        if (valor1 > valor2 && valor2 > valor3)
        {
            menor = valor3;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor2, maior);
        } else
        {
            menor = valor2;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor3, maior);
        }
            
    }

    else if (valor2 >= valor1 && valor2 >= valor3)
    {
        maior = valor2;
        if (valor2 > valor1 && valor1 > valor3)
        {
            menor = valor3;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor1, maior);
        } else
        {
            menor = valor1;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor3, maior);
        }
         
    }

    else if (valor3 >= valor1 && valor3 >= valor2)
    {
        maior = valor3;
        if (valor3 > valor1 && valor1 > valor2)
        {
            menor = valor2;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor1, maior);
        }
        else
        {
            menor = valor1;
            printf("Os valores digitados em ordem crescente fica %d, %d e %d \n", menor, valor2, maior);
        }
    }

    system("pause");
    return 0;
}
