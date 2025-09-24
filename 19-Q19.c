#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor1, valor2, valor3;
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
    else if (valor1 > valor2 && valor1 > valor3)
    {
        printf("O maior valor digitado é %d. \n", valor1);
    }
    else if (valor2 > valor1 && valor2 > valor3)
    {
        printf("O maior valor digitado é %d. \n", valor2);
    }
    else if (valor3 > valor1 && valor3 > valor2)
    {
        printf("O maior valor digitado é %d. \n", valor3);
    } else
    {
        printf("O maior valor digitado é %d. \n", valor1 > valor2 ? valor1 : valor2);
    }
    
      
    system("pause");
    return 0;
}
