#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero, antecessor, sucessor;
    printf("Digite um número: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Antecessor do número %d = %d \n", numero, antecessor);
    printf("Sucessor do número %d = %d \n", numero, sucessor);
    system("pause");
    return 0;
}