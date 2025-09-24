#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int a, b, temporario;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

    printf("\n");
    printf("Valor do A digitado = %d \n", a);
    printf("Valor do B digitado = %d \n", b);

    temporario = a;
    a = b;
    b = temporario;

    printf("\n");
    printf("Valor do A trocado = %d \n", a);
    printf("Valor do B trocado = %d \n", b);

    system("pause");
    return 0;
}
