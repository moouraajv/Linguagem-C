#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor;
    char resto;

    printf("Digitem um valor inteiro v�lido: ");
    if (scanf("%d%c", &valor, &resto) != 2 || resto != '\n')
    {
        printf("Voc� n�o digitou um valor inteiro v�lido, tente novamente.\n");
        return 1;
    }
    
    if (valor % 2 == 0)
    {
        printf("O valor digitado � par. \n");
    } else
    {
        printf("O valor digitado � impar. \n");
    }
    
    system("pause");
    return 0;
}