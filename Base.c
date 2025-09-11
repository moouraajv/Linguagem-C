#include <stdio.h> // Biblioteca que serve para usar os comandos de ler e escrever na tela
#include <locale.h> // Biblioteca para caracteres especiais e acentuação
#include <stdlib.h> // Biblioteca auxiliar
// \n - É usada para pular uma linha |

int main()
{
    setlocale(LC_ALL, "");
    printf("Olá, Mundo!\n");
    printf("Hello World!\n");
    return 0;
}