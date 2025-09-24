#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int x = 12, y = 4, soma, produto;
    float quociente;
    soma = x + y;
    produto = x * y;
    quociente = x / y;
    printf("Resultado da soma entre %d \n| e %d = %d \n", x, y, soma);
    printf("\n");
    printf("O Produto da multiplicação = %d \n", produto);
    printf("\n");
    printf("O Quociente da divisão = %.2f \n", quociente);
    system("pause");
    return 0;
}
