#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valor, positivo;
    char resto;

    printf("Digite um valor inteiro válido: ");
    if (scanf("%d%c", &valor, &resto) != 2 || resto != '\n')
    {
        printf("Você não digitou um valor válido, tente novamente. \n");
        return 1;
    }

    if (valor >= 0)
    {
        printf("%d É um valor positivo. \n", valor);
    } else
    {
       positivo = valor * -1;
       printf("O valor que era %d agora é %d. \n", valor, positivo);
    }

    system("pause");
    return 0;
}
