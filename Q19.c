#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int valor1, valor2, valor3;
    char resto;

    printf("Digite 3 valores v�lidos abaixo. \n");
    if (scanf("%d%d%d%c", &valor1, &valor2, &valor3, &resto) != 4 || resto != '\n')
    {
        printf("Voc� digitou um valor inv�lido, tente novamente. \n");
        return 1;
    }

    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("Voc� digitou 3 valores iguais. \n");
    }
    else if (valor1 > valor2 && valor1 > valor3)
    {
        printf("O maior valor digitado � %d. \n", valor1);
    }
    else if (valor2 > valor1 && valor2 > valor3)
    {
        printf("O maior valor digitado � %d. \n", valor2);
    }
    else if (valor3 > valor1 && valor3 > valor2)
    {
        printf("O maior valor digitado � %d. \n", valor3);
    } else
    {
        printf("O maior valor digitado � %d. \n", valor1 > valor2 ? valor1 : valor2);
    }
    
      
    system("pause");
    return 0;
}