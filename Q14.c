#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor;
    char resto;

    printf("Digite um valor inteiro válido: ");
    if (scanf("%d%c", &valor, &resto) != 2 || resto != '\n')
    {
        printf("Você não digitou um valor inteiro válido, tente novamente.\n");
        return 1;
    }

    if (valor == 0)
    {
        printf("O valor %d = 0 \n", valor);
    } else if (valor > 0)
    {
        printf("O valor %d é positivo \n", valor);
    } else
    {
        printf("O valor %d é negativo \n", valor);
    }
        
    system("pause");
    return 0;
}