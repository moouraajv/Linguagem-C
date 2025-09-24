#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor;
    char resto;

    printf("Digitem um valor inteiro válido: ");
    if (scanf("%d%c", &valor, &resto) != 2 || resto != '\n')
    {
        printf("Você não digitou um valor inteiro válido, tente novamente.\n");
        return 1;
    }
    
    if (valor % 2 == 0)
    {
        printf("O valor digitado é par. \n");
    } else
    {
        printf("O valor digitado é impar. \n");
    }
    
    system("pause");
    return 0;
}