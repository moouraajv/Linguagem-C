#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int resultado, x = 10, y = 10;
    resultado = x * y;
    printf("Resultado da multiplicação = %d  \n", resultado);
    system("pause");
    return 0;
}
