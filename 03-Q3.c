#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, y, quociente, resto;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    quociente = x / y;
    resto = x % y;
    printf("O quociente da divisão entre %d \n| e %d = %d e o resto = %d \n", x, y, quociente, resto);
    system("pause");
    return 0;
}
