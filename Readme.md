# ©️ Documentação da Linguagem C

<p align="left">
    <img src="./Arquivos/LC.jpg" alt="Logo" width="70%">
</p>

**Autor:**  *João Victor Moura*

**Material:**  *Professor André Backes*

> Guia prático de consulta rápida para iniciantes em C, com foco nos pontos mais comuns da linguagem, útil para quem precisa revisar algo rápido.

---

## 📖 Sumário
- [Dicas Úteis](#-dicas-úteis)
- [Bibliotecas Principais](#-bibliotecas-principais)
- [Variáveis e Tipos de Dados](#-variáveis-e-tipos-de-dados)
- [Comandos Condicionais](#️-comandos-condicionais)
- [Comandos de Repetição](#️-comandos-de-repetição)
- [Diferença do For e While](#️-diferença-do-for-e-while)
- [Outros Comandos](#-outros-comandos)



## 💡 Dicas Úteis 

- ### **\n** - É usado para pular uma linha. *Exemplo, ```printf("Olá, Mundo!\n")```.*
- ### **%c** - Quando quiser mostrar uma carácter na tela. *Exemplo ```printf("%c \n", letra)```.*
- ### **%d** - Para mostrar números inteiros na tela. *Exemplo ```printf("%d \n", resultado)```.*
- ### **%f** - Para mostrar números reais na tela. *Exemplo ```printf("%f \n", nro)```.*
- ### **%lf** - Usado para ler o valor tipo **double**. *Exemplo ```scanf("%lf", &num)```.*
- ### Ainda sobre o **double**, você usa o **%f** para mostrar o valor na tela. *Exemplo ```  printf("Você digitou: %.2f\n", num)```.*


## 📚 Bibliotecas Principais

- ### **stdio.h** 
    #### Fornece funções para entrada e saída de dados. *Exemplos: printf() (imprimir na tela), scanf() (ler do teclado), fopen() (abrir arquivo).*

```bash
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
```

- ### **stdlib.h**
    #### Fornece funções utilitárias gerais, como alocação de memória, conversões e geração de números aleatórios. *Exemplos: malloc(), free(), atoi(), rand().*

```bash
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = rand() % 100; // número aleatório de 0 a 99
    printf("Número sorteado: %d\n", numero);
    return 0;
}
```

- ### **string.h** 
    #### Funções para manipulação de cadeias de caracteres. *Exemplos: strlen() (tamanho), strcpy() (copiar), strcmp() (comparar), strcat() (concatenar).*

```bash
#include <stdio.h>
#include <string.h>

int main() {
    char nome[20] = "João";
    char sobrenome[20] = " Victor";

    strcat(nome, sobrenome); // junta as duas strings
    printf("Nome completo: %s\n", nome);
    return 0;
}
```

- ### **math.h**
    #### Funções matemáticas avançadas. *Exemplos: sqrt() (raiz quadrada), pow() (potência), sin(), cos(), fabs().*

```bash
#include <stdio.h>
#include <math.h>

int main() {
    double raiz = sqrt(25.0);   // raiz quadrada
    double potencia = pow(2, 3); // 2³
    printf("Raiz: %.2f, Potência: %.2f\n", raiz, potencia);
    return 0;
}
```

- ### **locale.h**
    #### Permite configurar regras regionais, como formatação de números, moeda e acentuação. *Exemplo: setlocale().*

```bash
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // habilita acentuação 
    printf("Olá, mundo com acentuação: ç, ã, é!\n");
    return 0;
}
```


## 📦 Variáveis e Tipos de Dados

- ### **char** 
  #### É um tipo de dado usado para armazenar um único caractere. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    char letra = 'A';   // armazena um caractere
    char numero = 65;   // armazena um valor inteiro (código ASCII de 'A')

    printf("Letra: %c\n", letra);     // imprime como caractere
    printf("Numero: %d\n", numero);   // imprime como inteiro

    return 0;
}
```

- ### **int**
  #### É um tipo de dado usado para armazenar números inteiros (positivos ou negativos). *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int idade = 20;       // armazena um número inteiro
    int ano = 2025;

    printf("Idade: %d\n", idade);
    printf("Ano: %d\n", ano);

    return 0;
}
```

- ### **float**
    #### Guarda números reais (com casas decimais), com precisão simples (~6 a 7 dígitos).
- ### **double**
    #### Guarda números reais com precisão dupla (~15 a 16 dígitos).
- ### **long double**
    #### Guarda números reais com precisão estendida, maior que a do double.
    #### *Exemplo.*
```bash
#include <stdio.h>

int main() {
    float nota = 7.5f;           // número real, precisão simples
    double pi = 3.14159265359;   // número real, precisão dupla
    long double grande = 3.141592653589793238L; // precisão estendida

    printf("Float: %.2f\n", nota);         // mostra com 2 casas decimais
    printf("Double: %.10lf\n", pi);        // mostra com 10 casas decimais
    printf("Long Double: %.15Lf\n", grande); // mostra com 15 casas decimais

    return 0;
}
```

## ⚙️ Comandos Condicionais

- ### **if**
    #### Permite executar ou não um conjunto de comandos de acordo com uma condição. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int idade = 18;

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }

    return 0;
}
```

- ### **else**
    #### Permite executar um segundo conjunto de comandos se a condição do *if* for falsa. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int idade = 16;

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}
```
- ### **Operador Ternário**
    #### O operador ternário (? :) é uma forma curta de escrever um if...else. Ele testa uma condição e escolhe um valor ou expressão dependendo se a condição é verdadeira ou falsa. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int idade = 17;

    // Se idade >= 18, resultado recebe "Maior de idade", senão recebe "Menor de idade"
    const char* resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("%s\n", resultado);

    return 0;
}
```

## 🛠️ Comandos de Repetição

- ### **switch**
    #### Permite fazer seleções múltiplas com base no valor  de uma variável do tip **int* ou **char**. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int opcao = 2;

    switch (opcao) {
        case 1:
            printf("Você escolheu a opção 1.\n");
            break;
        case 2:
            printf("Você escolheu a opção 2.\n");
            break;
        case 3:
            printf("Você escolheu a opção 3.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
```

- ### **while**
    #### Permite executar, repetidamente, um conjunto de comandos de acordo com uma condição. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("Contagem: %d\n", contador);
        contador++; // incrementa o valor
    }

    return 0;
}
```

- ### **for**
    #### É uma estrutura de repetição que permite executar um bloco de código várias vezes. *Exemplo.*
```bash
#include <stdio.h>

int main() {
  int i; // Declara uma variável inteira 'i' para ser o nosso contador

  // A estrutura do "for" tem 3 partes, separadas por ponto e vírgula:
  // 1. Inicialização: i = 1 (Começa o contador em 1)
  // 2. Condição: i <= 5 (Continua o laço enquanto 'i' for menor ou igual a 5)
  // 3. Incremento: i++ (Aumenta o valor de 'i' em 1 a cada repetição)
  for (i = 1; i <= 5; i++) {
    printf("O número é: %d\n", i);
  }

  return 0;
}
```

## ↔️ Diferença do **for** e **while**

| Característica | Laço `for` | Laço `while` |
| :--- | :--- | :--- |
| **Melhor uso** | Para um número **conhecido** de repetições. | Para um número **desconhecido** de repetições. |
| **Estrutura** | Ideal para laços com um contador. | Ideal para laços baseados em uma condição geral. |
| **Código** | Mais conciso e legível para iterações com contadores. | Mais flexível para condições que não envolvem contadores. |

- ### **do-while**
    #### Permite executar, repetidamente e **ao menos uma vez**, um conjunto de comandos de acordo com uma condição. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int numero;

    // O laço do-while garante que este bloco será executado pelo menos uma vez.
    do {
        printf("Digite um numero par: ");
        scanf("%d", &numero);
    } while (numero % 2 != 0); // A condição verifica se o numero é impar (resto da divisão por 2 é diferente de 0)

    printf("Voce digitou o numero par: %d\n", numero);

    return 0;
}
```

## ➕ Outros Comandos

- ### **break**
    #### É usado para "quebrar" ou sair imediatamente de um laço de repetição (for, while, do-while) ou de uma estrutura de controle switch. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int i;

    // Este laco foi feito para contar de 1 a 10
    for (i = 1; i <= 10; i++) {
        printf("Contando: %d\n", i);

        // Se o numero atual for 5...
        if (i == 5) {
            printf("Numero 5 alcancado. Saindo do laco.\n");
            break; // O comando 'break' interrompe o laco 'for' imediatamente
        }
    }
    
    printf("\nFim do programa.\n");

    return 0;
}
```

- ### **continue**
    #### É usado para pular para a próxima iteração (repetição) de um laço, ignorando o resto do código que está dentro do bloco do laço para aquela execução atual. *Exemplo.*
```bash
#include <stdio.h>

int main() {
    int i;

    // Laco para percorrer os numeros de 1 a 10
    for (i = 1; i <= 10; i++) {
        // Se o numero for impar (o resto da divisao por 2 for 1)...
        if (i % 2 != 0) {
            printf("Numero impar encontrado: %d. Pulando para o proximo.\n", i);
            continue; // Pula o resto do codigo do laco e vai para a proxima iteracao
        }

        // Esta linha so sera executada se o numero for par
        printf("Numero par: %d\n", i);
    }
    
    return 0;
}
```