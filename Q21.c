#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int lado1, lado2, lado3;
    char resto;

    printf("Digite 3 valores válidos abaixo para verificar que tipo de triângulo. \n");
    if (scanf("%d%d%d%c", &lado1, &lado2, &lado3, &resto) != 4 || resto != '\n')
    {
        printf("Você digitou um valor inválido, tente novamente. \n");
        return 1;
    }

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
    {
        printf("Os comprimentos devem ser maiores que zero.\n");
        return 1;
    }

    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2))
    {
        printf("Os 3 valores podem ser lados de um triângulo.\n");
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Formam um triângulo equilátero.\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Formam um triângulo isósceles.\n");
        } else
        {
            printf("Formam um triângulo escaleno.\n");
        }
    }
    else
    {
        printf("Os 3 valores não podem ser lados de um triângulo.\n");
    }

    system("pause");
    return 0;
}