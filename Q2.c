#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero, antecessor, sucessor;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Antecessor do n�mero %d = %d \n", numero, antecessor);
    printf("Sucessor do n�mero %d = %d \n", numero, sucessor);
    system("pause");
    return 0;
}