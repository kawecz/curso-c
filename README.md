# curso-c
 Curso de linguagem C do professor <a href = "https://www.youtube.com/@profpietromartins/featured">Pietro Martins</a> usando o Devc++
 (No caso eu usei o ZED)

abaixo irei fazer uma documentação dos conteudos estudados durante o curso, tanto para aprendizagem quanto para revisão.
<hr>

## 📘Aula 1.2 - Aprenda a DEBUGAR
Debugar significa encontrar e corrigir erros no seu código. Na linguagem C, isso é ainda mais importante, porque erros como ponteiros inválidos, variáveis não inicializadas e falhas de segmentação podem quebrar o programa silenciosamente. Aprender a depurar é aprender a investigar e entender o comportamento do seu código.

O primeiro passo é prestar atenção nas mensagens do compilador. Ao usar o `gcc`, leia com atenção os erros e avisos. Eles mostram a linha exata do problema e dão dicas sobre o que está errado. Use sempre os parâmetros `-Wall` e `-Wextra` ao compilar para ativar todos os avisos possíveis. Muitos desses avisos indicam bugs que ainda não se manifestaram como erro.

Outra técnica fundamental é usar a função `printf` para rastrear o valor de variáveis. Inserir mensagens estratégicas ao longo do código ajuda a entender se determinadas partes estão sendo executadas, quais valores estão sendo processados e se as condições estão funcionando como esperado. É simples, mas extremamente eficaz.

Por exemplo, imagine que você tem um código assim:

```c
#include <stdio.h>

int main() {
    int x;
    printf("x vale: %d\n", x);
    return 0;
}
```

Esse programa pode compilar, mas exibirá um valor lixo, porque `x` não foi inicializado. Ao usar `printf`, você percebe rapidamente que há algo errado, mesmo sem erro de compilação.

Se o erro for difícil de encontrar, comente partes do código e teste em blocos. Isolar o problema reduz a complexidade e permite focar em pequenas partes do programa. Criar versões mínimas do código também ajuda a identificar padrões e reproduzir o erro com mais clareza.

Para uma depuração mais avançada, utilize o `gdb`. Ele permite executar o programa linha por linha, ver o valor de variáveis em tempo real e entender exatamente onde e por que o código falha. Basta compilar com a flag `-g`, iniciar o `gdb` com o binário, adicionar breakpoints e ir executando com os comandos básicos como `run`, `next` e `print`.
<hr>

## 📘Aula 2.1 - Aprenda a mostrar mensagens
Mostrar mensagens na linguagem C é feito principalmente com a função `printf`, que envia informações para a saída padrão, normalmente a tela do computador. Essa função é usada para exibir textos, números e o valor de variáveis enquanto o programa está rodando.

A sintaxe básica do `printf` é simples: você passa uma string entre aspas com o texto que quer mostrar. Para exibir valores de variáveis, usa-se códigos especiais chamados especificadores de formato, como `%d` para números inteiros, `%f` para números com casas decimais e `%c` para caracteres.
E lembre de adicionar a biblioteca, como por exemplo:
#include <stdio.h>

Por exemplo, veja esse código:

```c
#include <stdio.h>

int main() {
    int idade = 25;
    printf("Minha idade é %d anos.\n", idade);
    return 0;
}
```

Nesse exemplo, `%d` será substituído pelo valor da variável `idade`. O `\n` no final cria uma nova linha na saída, deixando o texto organizado.
<hr>

## 📘Aula 2.2 - Inserindo dados pelo teclado
Inserir dados pelo teclado em C é feito principalmente com a função `scanf`. Ela permite que o programa leia informações digitadas pelo usuário durante a execução e armazene esses valores em variáveis para serem usados depois.

A sintaxe básica do `scanf` é parecida com o `printf`, mas com dois pontos importantes: você deve indicar o formato do dado que espera receber (como `%d` para inteiro, `%f` para número decimal) e passar o endereço da variável usando o operador `&`.

Por exemplo:

```c
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
```

Nesse código, o programa pede que o usuário digite a idade. O `scanf` lê o número digitado e armazena na variável `idade`. Depois, o valor é mostrado com `printf`.

<hr>

## 📘Aula 3.1 - Entenda variáveis e atrubuição de dados
Variáveis são espaços nomeados na memória do computador usados para guardar dados que o programa precisa manipular. Cada variável tem um tipo que determina o tipo de dado que ela pode armazenar e o tamanho desse espaço na memória. Os tipos básicos em C incluem:

* `int`: números inteiros (ex: 10, -5)
* `float`: números com ponto flutuante, ou seja, com casas decimais (ex: 3.14)
* `double`: números com ponto flutuante com maior precisão
* `char`: caracteres individuais (ex: 'a', 'Z')

Declarar uma variável significa informar ao compilador que você quer reservar um espaço para armazenar aquele tipo de dado, e você deve dar um nome para essa variável. O nome deve seguir regras, como não conter espaços, não começar com número e não usar palavras reservadas da linguagem.

Exemplo de declaração:

```c
int idade;
float peso;
char letra;
```

Atribuir um valor a uma variável é colocar um dado naquele espaço usando o operador `=`. A atribuição pode ser feita no momento da declaração ou depois.

Exemplo:

```c
int idade = 20;    // Declara e já atribui
peso = 65.5;       // Atribui depois da declaração
letra = 'A';       // Atribui um caractere
```

É importante lembrar que o tipo da variável define o que ela pode armazenar e como o computador interpreta os bits naquela posição da memória. Por isso, tentar guardar um valor fora do tipo pode gerar erros ou resultados inesperados.

Outra coisa fundamental é que, antes de usar uma variável, ela deve ser inicializada — ou seja, receber um valor — para evitar que contenha “lixo” na memória, o que pode causar comportamentos errados no programa.

Também podemos fazer operações com variáveis e atribuir o resultado a outras variáveis:

```c
int a = 10;
int b = 5;
int soma = a + b;
printf("Soma: %d\n", soma); // Mostra 15
```
<hr>

## 📘Aula 3.2 - Aprenda a realizar cálculos
Fazer cálculos em C é fundamental para qualquer programa que precise manipular números. A linguagem oferece operadores matemáticos básicos para realizar as quatro operações principais: adição, subtração, multiplicação e divisão.

Os operadores usados são:

* `+` para somar
* `-` para subtrair
* `*` para multiplicar
* `/` para dividir
* `%` para obter o resto da divisão inteira (módulo)

Você pode usar esses operadores para fazer cálculos simples com variáveis e valores diretamente no código.

Por exemplo:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int divisao = a / b;
    int resto = a % b;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Divisão: %d\n", divisao);
    printf("Resto da divisão: %d\n", resto);

    return 0;
}
```

Nesse exemplo, realizamos várias operações básicas entre duas variáveis inteiras. Note que a divisão entre inteiros resulta em um número inteiro, descartando a parte decimal.

Para trabalhar com números decimais, use os tipos `float` ou `double` e o operador `/` fará a divisão real, mantendo as casas decimais.

Exemplo com `float`:

```c
#include <stdio.h>

int main() {
    float x = 7.5;
    float y = 2.5;
    float resultado = x / y;

    printf("Resultado da divisão: %.2f\n", resultado);
    return 0;
}
```

Aqui, `%.2f` no `printf` indica que o número será mostrado com duas casas decimais.

Além dos operadores básicos, C também permite usar parênteses para definir a ordem das operações, seguindo a regra matemática.
<hr>

##  📘Aula 4.1 - Domine o comando IF
O comando `if` em C é usado para tomar decisões no programa, executando um bloco de código apenas se uma condição for verdadeira. É fundamental para criar programas que respondem a diferentes situações.

A estrutura básica do `if` é:

```c
if (condição) {
    // código a executar se a condição for verdadeira
}
```

A condição dentro dos parênteses é uma expressão que pode ser verdadeira (`true`) ou falsa (`false`). Em C, uma condição é verdadeira se for diferente de zero, e falsa se for zero.

Exemplo simples:

```c
#include <stdio.h>

int main() {
    int idade = 18;

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }
    return 0;
}
```

Nesse exemplo, o texto só será mostrado se a variável `idade` for maior ou igual a 18.

Também é possível usar o `else` para definir um bloco que será executado quando a condição do `if` for falsa:

```c
if (idade >= 18) {
    printf("Maior de idade.\n");
} else {
    printf("Menor de idade.\n");
}
```

O comando `if` pode ser combinado com operadores lógicos para verificar várias condições ao mesmo tempo, usando `&&` (E), `||` (OU) e `!` (NÃO).

Dominar o `if` é essencial para controlar o fluxo do programa e criar lógica condicional eficiente.
<hr>

##  📘Aula 4.1.1 - Operações lógicas: disjunção, conjunção e negação
Operações lógicas são usadas para combinar ou inverter condições em C, tornando as decisões do programa mais complexas e precisas. Os principais operadores lógicos são:

* Conjunção (`&&`): representa o “E”. A condição é verdadeira somente se **todas** as partes forem verdadeiras.
* Disjunção (`||`): representa o “OU”. A condição é verdadeira se **pelo menos uma** das partes for verdadeira.
* Negação (`!`): representa o “NÃO”. Inverte o valor lógico da condição (verdadeiro vira falso, e falso vira verdadeiro).

Exemplo prático:

```c
#include <stdio.h>

int main() {
    int idade = 20;
    int possui_carteira = 1; // 1 = verdadeiro, 0 = falso

    // Conjunção: verifica se a pessoa tem idade e carteira
    if (idade >= 18 && possui_carteira) {
        printf("Pode dirigir.\n");
    }

    // Disjunção: verifica se é menor de idade ou não tem carteira
    if (idade < 18 || !possui_carteira) {
        printf("Não pode dirigir.\n");
    }

    return 0;
}
```

Neste exemplo, usamos `&&` para garantir que ambas as condições sejam verdadeiras para permitir dirigir, e `||` junto com `!` para negar a permissão caso uma delas não seja satisfeita.
<hr>

## 📘Aula 4.2 - Domine os comandos IF e ELSE
Os comandos `if` e `else` permitem que seu programa tome decisões e execute diferentes blocos de código dependendo de condições.

A estrutura básica é:

```c
if (condição) {
    // executa se a condição for verdadeira
} else {
    // executa se a condição for falsa
}
```

O `if` verifica a condição; se for verdadeira, executa o primeiro bloco. Se for falsa, o programa pula para o bloco dentro do `else`.

Exemplo:

```c
#include <stdio.h>

int main() {
    int nota = 70;

    if (nota >= 60) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
```

Neste exemplo, o programa verifica se a nota é maior ou igual a 60. Se sim, imprime "Aprovado!". Caso contrário, imprime "Reprovado!".
<hr>

## 📘Aula 4.3 - Conheça o comando SWITCH-CASE
O comando `switch-case` é uma alternativa ao `if-else` para tomar decisões baseadas no valor de uma variável. Ele facilita a leitura e organização do código quando você precisa verificar várias condições de forma direta.

A estrutura básica é:

```c
switch (variável) {
    case valor1:
        // código para valor1
        break;
    case valor2:
        // código para valor2
        break;
    // outros casos...
    default:
        // código padrão, executado se nenhum case for atendido
}
```

O `switch` compara a variável com cada `case`. Quando encontra um valor igual, executa o código daquele bloco até encontrar o comando `break`, que interrompe o `switch`. O `default` é opcional e executa se nenhum caso for verdadeiro.

Exemplo:

```c
#include <stdio.h>

int main() {
    int dia = 3;

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        default:
            printf("Dia inválido\n");
    }

    return 0;
}
```

Nesse exemplo, como `dia` é 3, o programa imprime "Terça-feira".
<hr>

##  📘Aula 5.1 - Domine o comando while - loops/laços condicionais
O comando `while` cria um loop (laço) que repete um bloco de código enquanto uma condição for verdadeira. É útil quando não sabemos exatamente quantas vezes o código deve ser repetido, mas sabemos qual condição deve ser mantida.

A estrutura básica é:

```c
while (condição) {
    // código a ser repetido enquanto a condição for verdadeira
}
```

Antes de cada repetição, a condição é verificada. Se for verdadeira, o código dentro do laço é executado. Quando a condição se tornar falsa, o loop para.

Exemplo simples:

```c
#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}
```

Neste exemplo, o programa imprime os números de 1 a 5, aumentando o contador a cada repetição. Quando `contador` passa de 5, o laço termina.

É importante garantir que a condição eventualmente se torne falsa, para evitar loops infinitos que travam o programa.
<hr>

##  📘Aula 5.2 - Conheça os comandos do & while
O comando `do-while` é um tipo de loop em C que executa o bloco de código **pelo menos uma vez** e depois verifica a condição para continuar repetindo. Diferente do `while`, que verifica a condição antes da primeira execução, o `do-while` garante que o código rode uma vez, mesmo que a condição já seja falsa.

A estrutura básica é:

```c
do {
    // código a ser executado
} while (condição);
```

Após executar o bloco, a condição é avaliada. Se for verdadeira, o loop continua; se for falsa, o loop termina.

Exemplo simples:

```c
#include <stdio.h>

int main() {
    int contador = 1;

    do {
        printf("Contador: %d\n", contador);
        contador++;
    } while (contador <= 5);

    return 0;
}
```

Neste exemplo, o programa imprime os números de 1 a 5. Mesmo que a condição já fosse falsa no início, o código dentro do `do` seria executado pelo menos uma vez.

O `do-while` é útil quando você precisa garantir que o código execute antes de verificar a condição, como em menus que precisam aparecer pelo menos uma vez.
<hr>

### 📘Aula 5.3 - Aprenda o comando for 

---

### 📌 Introdução

O comando `for` é utilizado para repetir um bloco de código **um número conhecido de vezes**. Ele é ideal quando sabemos de antemão **quantas vezes** um laço deve se repetir. Por isso, também é chamado de **laço de repetição contado**.

---

### 🧱 Estrutura do `for`

```c
for (inicialização; condição; incremento) {
    // bloco de código a ser repetido
}
```

| Parte         | Função                                                                                      |
| ------------- | ------------------------------------------------------------------------------------------- |
| Inicialização | Executa uma vez no início do laço (normalmente usada para declarar a variável de controle). |
| Condição      | Verificada antes de cada iteração. Se for verdadeira, o laço continua.                      |
| Incremento    | Executado ao final de cada iteração (geralmente incrementa o contador).                     |

---

### ✅ Exemplo 1: Contando de 1 até 5

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Valor de i: %d\n", i);
    }
    return 0;
}
```

#### 🖨️ Saída:

```
Valor de i: 1
Valor de i: 2
Valor de i: 3
Valor de i: 4
Valor de i: 5
```

---

### 🔁 Exemplo 2: Contagem decrescente

```c
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        printf("Contagem: %d\n", i);
    }
    return 0;
}
```

#### 🖨️ Saída:

```
Contagem: 5
Contagem: 4
Contagem: 3
Contagem: 2
Contagem: 1
```

---

### 🧠 Observações importantes

* Todas as 3 partes do `for` são opcionais, mas os `;` devem estar presentes:

```c
for (;;) {
    // laço infinito
}
```

* A variável `i` declarada dentro do `for` tem **escopo local** ao laço. Ela deixa de existir fora dele.

---

### 🧮 Tabela de comparação: `for`, `while` e `do...while`

| Característica | `for`              | `while`           | `do...while`              |
| -------------- | ------------------ | ----------------- | ------------------------- |
| Uso comum      | Contagem conhecida | Condição genérica | Executar ao menos uma vez |
| Verificação    | Antes do bloco     | Antes do bloco    | Depois do bloco           |
| Sintaxe        | Compacta e clara   | Mais flexível     | Mais garantida            |

---

### 🧠 Conclusão

O `for` é uma das estruturas mais utilizadas em programação por sua clareza e controle. Ele facilita a repetição de comandos de forma organizada, especialmente quando sabemos **exatamente quantas vezes** a repetição deve ocorrer. Dominar seu uso é essencial para qualquer programador C.
<hr>

## 📘Aula 5.4 - Conheça os comandos de Controle de Fluxo break e continue 

## Introdução
Em C, os comandos `break` e `continue` são usados para controlar o fluxo de execução em loops (`for`, `while`, `do-while`) e em estruturas `switch`.

## Comando `break`
- **Função**: Interrompe imediatamente a execução do loop ou do `switch`.
- **Uso**: Sai do loop quando uma condição é satisfeita.

### Exemplo com `break` em loop:
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Sai do loop quando i == 5
        }
        printf("%d\n", i);
    }
    return 0;
}
```
**Saída**:
```
0
1
2
3
4
```

### Exemplo com `break` em switch:
```c
#include <stdio.h>

int main() {
    int opcao = 2;
    
    switch (opcao) {
        case 1:
            printf("Opção 1\n");
            break;
        case 2:
            printf("Opção 2\n");
            break; // Sai do switch após executar este case
        case 3:
            printf("Opção 3\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
```
**Saída**:
```
Opção 2
```

## Comando `continue`
- **Função**: Pula a iteração atual e vai para a próxima iteração do loop.
- **Uso**: Ignora parte do código em uma condição específica, mas continua o loop.

### Exemplo com `continue`:
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Pula números pares
        }
        printf("%d\n", i);
    }
    return 0;
}
```
**Saída**:
```
1
3
5
7
9
```

## Diferenças Principais
| Comando  | Efeito                                                                 |
|----------|-----------------------------------------------------------------------|
| `break`  | Sai completamente do loop ou do `switch`                             |
| `continue` | Pula apenas a iteração atual e continua no próximo ciclo do loop    |

## Aplicações Práticas
1. **`break`**:
   - Parar um loop quando um valor é encontrado.
   - Sair de um menu de opções (`switch`).

2. **`continue`**:
   - Ignorar valores específicos durante um processamento.
   - Pular iterações desnecessárias para economizar tempo.

Estes comandos são essenciais para um controle mais preciso de fluxo em programas C.
<hr>

## 📘Aula 6.1 - Domine Vetores (Arrays)
## O que são Vetores (Arrays)?

Vetores, também conhecidos como arrays, são estruturas de dados que armazenam uma coleção de elementos do **mesmo tipo** em posições contíguas de memória.

### Características principais:
- Todos os elementos são do mesmo tipo (int, float, char, etc.)
- Tamanho fixo (definido na declaração)
- Acesso direto aos elementos através de índices
- Índices começam em 0 (zero)

## Declaração de Vetores

Sintaxe básica:
```c
tipo nome_do_vetor[tamanho];
```

Exemplos:
```c
int numeros[10];        // Vetor de 10 inteiros
float notas[5];         // Vetor de 5 floats
char vogais[5];         // Vetor de 5 caracteres
```

## Inicialização de Vetores

Podemos inicializar um vetor na declaração:

```c
// Inicialização explícita
int numeros[5] = {10, 20, 30, 40, 50};

// Inicialização com tamanho implícito
float precos[] = {1.99, 2.50, 9.99}; // Tamanho 3

// Inicialização parcial (restante será zero)
int valores[5] = {10, 20}; // [10, 20, 0, 0, 0]
```

## Acessando Elementos

Os elementos são acessados através de índices (entre colchetes):

```c
int idades[5] = {25, 30, 22, 40, 18};

printf("%d", idades[0]); // Imprime 25 (primeiro elemento)
idades[2] = 23;          // Altera o terceiro elemento para 23
```

## Exemplo Prático

```c
#include <stdio.h>

int main() {
    // Declara e inicializa um vetor
    float notas[4] = {7.5, 8.0, 6.5, 9.0};
    float soma = 0, media;
    
    // Calcula a soma das notas
    for(int i = 0; i < 4; i++) {
        soma += notas[i];
    }
    
    // Calcula a média
    media = soma / 4;
    
    printf("Média: %.2f\n", media);
    
    return 0;
}
```

## Cuidados Importantes

1. **Índices inválidos**: Acessar posições fora do vetor pode causar comportamentos inesperados
   ```c
   int vetor[3] = {1, 2, 3};
   printf("%d", vetor[5]); // Comportamento indefinido!
   ```

2. **Tamanho fixo**: O tamanho do vetor não pode ser alterado após a declaração

3. **Verificação de limites**: C não verifica automaticamente se os índices estão dentro dos limites

## Vetores e Funções

Podemos passar vetores como parâmetros para funções:

```c
void imprimirVetor(int vet[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
}

int main() {
    int numeros[5] = {1, 3, 5, 7, 9};
    imprimirVetor(numeros, 5);
    return 0;
}
```

Observação: Quando passamos um vetor para uma função, na verdade estamos passando um ponteiro para seu primeiro elemento. Portanto, alterações no vetor dentro da função afetam o vetor original.
<hr>

## 📘Aula 6.2 - Strings: trabalhando com dados de texto

## O que são Strings em C?

Em C, strings são sequências de caracteres armazenadas em arrays de caracteres (vetores do tipo `char`). Diferente de outras linguagens, C não possui um tipo de dado específico para strings - elas são implementadas como arrays de caracteres terminados pelo caractere nulo `'\0'`.

## Declaração de Strings

Existem várias formas de declarar strings em C:

```c
// Forma 1: Declaração com tamanho fixo
char nome[50]; // String que pode armazenar até 49 caracteres + '\0'

// Forma 2: Inicialização direta
char saudacao[] = "Olá, mundo!"; // O compilador calcula o tamanho automaticamente

// Forma 3: Usando ponteiro
char *mensagem = "Bem-vindo ao C"; // String literal (armazenada em segmento read-only)
```

## Funções Básicas para Manipulação de Strings

A biblioteca `<string.h>` fornece várias funções essenciais:

### strlen() - Tamanho da string
```c
size_t strlen(const char *str);
```
- Retorna o número de caracteres antes do '\0'
- Exemplo:
  ```c
  char texto[] = "ABCDE";
  size_t tam = strlen(texto); // tam = 5
  ```

### strcpy() - Copiar strings
```c
char *strcpy(char *dest, const char *src);
```
- Copia a string `src` para `dest` (incluindo o '\0')
- Versão segura: `strncpy()` que limita o número de caracteres copiados
- Exemplo:
  ```c
  char destino[20];
  char origem[] = "Texto exemplo";
  strncpy(destino, origem, sizeof(destino) - 1);
  destino[sizeof(destino) - 1] = '\0'; // Garante terminação
  ```

### strcat() - Concatenar strings
```c
char *strcat(char *dest, const char *src);
```
- Adiciona `src` ao final de `dest`
- Versão segura: `strncat()`
- Exemplo:
  ```c
  char nome[50] = "João";
  strncat(nome, " Silva", sizeof(nome) - strlen(nome) - 1);
  ```

### strcmp() - Comparar strings
```c
int strcmp(const char *str1, const char *str2);
```
- Compara strings lexicograficamente
- Retorna 0 se iguais, <0 se str1 < str2, >0 se str1 > str2
- Versão para localidades: `strcoll()`
- Exemplo:
  ```c
  if(strcmp(senha, "secreta123") == 0) {
      printf("Acesso permitido!\n");
  }
  ```

## Internacionalização com locale.h

Para trabalhar com caracteres internacionais e formatação regional:

```c
#include <locale.h>

// Configura para a localidade padrão do sistema (suporta acentos, ç, etc.)
setlocale(LC_ALL, "");

// Ou especificamente para português brasileiro
setlocale(LC_ALL, "pt_BR.UTF-8");
```

## Entrada e Saída de Strings

```c
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Habilita caracteres especiais
    
    char nome[50];
    
    // Leitura segura com fgets
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    
    // Remove quebra de linha
    nome[strcspn(nome, "\n")] = '\0';
    
    // Saída com caracteres especiais
    printf("Olá, %s!\n", nome);
    
    return 0;
}
```

## Percorrendo e Manipulando Strings

```c
char texto[] = "Programação em C";
int i;

// Convertendo para maiúsculas considerando localidade
for(i = 0; texto[i]; i++) {
    texto[i] = toupper(texto[i]);
}
printf("%s\n", texto); // "PROGRAMAÇÃO EM C"
```

## Cuidados Avançados

1. **Segurança**: Sempre use versões seguras das funções (strncpy, strncat)
2. **Localização**: Configure locale para suportar caracteres internacionais
3. **Alocação**: Para strings dinâmicas, use malloc/free corretamente
4. **Unicode**: Para suporte completo a caracteres, considere bibliotecas como ICU

## Exemplo Completo Internacionalizado

```c
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char nome[50], sobrenome[50], nome_completo[100];
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    
    strncpy(nome_completo, nome, sizeof(nome_completo) - 1);
    strncat(nome_completo, " ", sizeof(nome_completo) - strlen(nome_completo) - 1);
    strncat(nome_completo, sobrenome, sizeof(nome_completo) - strlen(nome_completo) - 1);
    
    printf("Nome completo: %s\n", nome_completo);
    printf("Tamanho: %zu caracteres\n", strlen(nome_completo));
    
    // Comparação considerando acentos
    if(strcoll(nome_completo, "João Silva") == 0) {
        printf("Seu nome é João Silva!\n");
    }
    
    return 0;
}
```

Este material combinado cobre desde os conceitos básicos até técnicas avançadas de manipulação de strings em C, incluindo internacionalização e boas práticas de segurança.

<hr>

##  📘Aula 7: Matrizes e Arrays Multidimensionais

1. **Introdução**
   Nesta aula, o foco é entender o que são **matrizes (arrays multidimensionais)** em C, como declarar, inicializar e manipular esses dados em programas. A ideia é expandir o uso de arrays simples para estruturas mais complexas que simulam tabelas de dados, como linhas e colunas.

2. **Conceito de Matrizes**
   Matriz é uma estrutura de dados que armazena valores do mesmo tipo em várias **dimensões**. A mais comum é a **bidimensional**, que representa uma tabela com **linhas** e **colunas**. Em C, arrays multidimensionais são definidos com colchetes indicando cada dimensão:

```c
int matriz[3][4];  // 3 linhas e 4 colunas
```

3. **Declaração e Inicialização**
   Você pode declarar e inicializar uma matriz de forma direta:

```c
int matriz[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};
```

Cada linha da matriz é separada por chaves `{}`, e os valores seguem a ordem das colunas. Também é possível inicializar com uma lista contínua:

```c
int matriz[2][3] = {1, 2, 3, 4, 5, 6};
```

4. **Acesso aos Elementos**
   O acesso é feito informando o **índice da linha** e o **índice da coluna**:

```c
printf("%d", matriz[0][1]);  // Acessa o elemento da 1ª linha, 2ª coluna (valor 2)
```

5. **Preenchimento com `for`**
   Um `for` aninhado é utilizado para percorrer todas as posições da matriz:

```c
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    printf("Elemento [%d][%d] = %d\n", i, j, matriz[i][j]);
  }
}
```

6. **Exemplo Prático**
   Programa que preenche uma matriz 3x3 com valores digitados pelo usuário:

```c
int matriz[3][3];
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    printf("Digite o valor para [%d][%d]: ", i, j);
    scanf("%d", &matriz[i][j]);
  }
}
```

7. **Matrizes com Tipos Diferentes**
   Matrizes podem ser de qualquer tipo básico: `int`, `float`, `char`. Exemplo com `float`:

```c
float notas[2][4];
```

8. **Arrays Tridimensionais (e além)**
   É possível criar arrays com mais de duas dimensões:

```c
int cubo[2][3][4];  // 2 "planos", 3 linhas e 4 colunas
```

Mas seu uso é menos comum e normalmente reservado para aplicações específicas (ex: gráficos 3D, processamento de imagem).

9. **Considerações Importantes**

* A linguagem C **não verifica limites de índice**, então acessar `matriz[10][10]` pode causar erro se o tamanho for menor.
* Use `#define` ou `const int` para tornar o tamanho da matriz mais legível e fácil de alterar.
* Matrizes ocupam **muita memória**, principalmente quando grandes, então deve-se evitar declarar matrizes gigantes sem necessidade.

10. **Conclusão**
    Matrizes são fundamentais para lidar com dados organizados em formato tabular. O domínio do acesso por índices, laços aninhados e boas práticas de declaração ajudam a escrever programas mais organizados, eficientes e preparados para problemas que envolvem tabelas, grades e mais de uma dimensão de informação.

<hr>

## 📘Aula 8 – Structs (Registros)

## 🧠 O que são Structs?

* Em C, uma `struct` (estrutura) é um tipo de dado definido pelo usuário que agrupa diferentes variáveis sob um mesmo nome.
* É usada para representar **registros** ou **objetos** com múltiplos atributos.
* Permite combinar variáveis de tipos diferentes (ex: `int`, `float`, `char[]`) em um único tipo lógico.

## 🧱 Sintaxe Básica

```c
struct NomeDaStruct {
    tipo1 nomeVariavel1;
    tipo2 nomeVariavel2;
    ...
};
```

### Exemplo:

```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
```

Isso define um novo tipo chamado `struct Pessoa`.

## 🧑‍💻 Como Declarar e Usar Structs

### 1. Declarando Variáveis

```c
struct Pessoa p1;
```

### 2. Atribuindo Valores

```c
strcpy(p1.nome, "João");
p1.idade = 25;
p1.altura = 1.75;
```

### 3. Acessando Campos

Use o operador `.` (ponto):

```c
printf("Nome: %s\n", p1.nome);
printf("Idade: %d\n", p1.idade);
printf("Altura: %.2f\n", p1.altura);
```

## 📦 Structs com `typedef`

* Permite simplificar o uso da struct:

```c
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;
```

Agora podemos declarar variáveis diretamente:

```c
Pessoa p2;
```

## 🧬 Structs Aninhadas

Uma `struct` pode conter outra `struct`:

```c
typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;
```

Uso:

```c
Pessoa p3;
strcpy(p3.nome, "Maria");
p3.nascimento.dia = 15;
p3.nascimento.mes = 8;
p3.nascimento.ano = 1990;
```

## 📚 Structs em Arrays

Você pode criar vetores de structs:

```c
Pessoa lista[100];
```

Acessando:

```c
strcpy(lista[0].nome, "Carlos");
lista[0].idade = 30;
```

## 🔁 Passando Structs para Funções

### Como valor:

```c
void imprimirPessoa(Pessoa p) {
    printf("%s - %d anos\n", p.nome, p.idade);
}
```

### Como ponteiro (mais eficiente):

```c
void atualizarIdade(Pessoa *p, int novaIdade) {
    p->idade = novaIdade;
}
```

Uso:

```c
atualizarIdade(&p1, 28);
```

## ✅ Vantagens de Usar Structs

* Organiza dados complexos.
* Facilita modularização de programas.
* Prepara para programação orientada a objetos (em C++).

---

## ✅ Conclusão

Structs são fundamentais para agrupar dados relacionados de forma organizada. Elas são especialmente úteis quando trabalhamos com registros reais, como informações de uma pessoa, produto ou livro. Usá-las corretamente torna o código mais limpo, modular e fácil de entender.
 
<hr>

## 📘Aula 9.1: Funções e Procedimentos

## O que são Funções e Procedimentos?

Em C, tanto funções quanto procedimentos são blocos de código que realizam tarefas específicas. A diferença principal é:

- **Funções**: Retornam um valor
- **Procedimentos**: Não retornam valor (usam o tipo `void`)

Na verdade, em C tecnicamente todas são funções, mas chamamos de "procedimentos" aquelas que não retornam valores.

## Estrutura de uma Função

```c
tipo_de_retorno nome_da_funcao(parametros) {
    // Corpo da função
    // Instruções
    return valor; // Para funções não void
}
```

## Exemplo de Função (com retorno)

```c
// Função que calcula o quadrado de um número
int quadrado(int num) {
    return num * num;
}

// Uso:
int resultado = quadrado(5); // resultado = 25
```

## Exemplo de Procedimento (sem retorno)

```c
// Procedimento que imprime uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}

// Uso:
imprimirMensagem(); // Imprime "Olá, mundo!"
```

## Parâmetros e Argumentos

- **Parâmetros**: Variáveis declaradas na assinatura da função
- **Argumentos**: Valores passados quando a função é chamada

```c
// Declaração com parâmetros
int soma(int a, int b) {
    return a + b;
}

// Chamada com argumentos
int total = soma(3, 4); // total = 7
```

## Escopo de Variáveis

- Variáveis declaradas dentro de funções são **locais** (só existem dentro da função)
- Variáveis declaradas fora de funções são **globais** (acessíveis em todo o programa)

```c
int global = 10; // Variável global

void teste() {
    int local = 5; // Variável local
    printf("%d, %d\n", global, local);
}
```

## Protótipos de Função

É boa prática declarar protótipos antes da função main():

```c
// Protótipos
int quadrado(int num);
void imprimirMensagem();

int main() {
    // Corpo principal
    return 0;
}

// Implementações depois
int quadrado(int num) { /* ... */ }
void imprimirMensagem() { /* ... */ }
```

## Exemplo Completo

```c
#include <stdio.h>

// Protótipos
int calcularAreaRetangulo(int base, int altura);
void imprimirResultado(int area);

int main() {
    int b = 5, h = 3;
    int area = calcularAreaRetangulo(b, h);
    imprimirResultado(area);
    return 0;
}

// Função que calcula área
int calcularAreaRetangulo(int base, int altura) {
    return base * altura;
}

// Procedimento que imprime resultado
void imprimirResultado(int area) {
    printf("A área do retângulo é: %d\n", area);
}
```

## Benefícios de Usar Funções

1. **Reutilização de código**: Escreva uma vez, use muitas
2. **Modularidade**: Divida problemas complexos em partes menores
3. **Facilidade de manutenção**: Corrija em um só lugar
4. **Legibilidade**: Código mais organizado e compreensível

<hr>

 ## 📘Aula 9.2 - Trabalhando com vários arquivos - Projeto de código

---

### 🔹 **1. Função `main()` – Estrutura e Parâmetros**

A função `main()` é o ponto de entrada de qualquer programa C. Quando o programa é executado pelo terminal, ele pode receber **argumentos da linha de comando**:

```c
int main(int argc, char *argv[]) {
    // código
}
```

* **`argc` (Argument Count):** Número de argumentos passados ao programa (inclui o nome do programa).
* **`argv` (Argument Vector):** Vetor de strings (`char*`) contendo cada argumento como texto.

**Exemplo de uso:**

```c
// comando no terminal:
./meu_programa entrada.txt

// dentro do main:
printf("Arquivo passado: %s\n", argv[1]);
```

---

### 🔹 **2. Arquivos-Fonte em C: Separação de Código**

#### **.c** – Arquivos de implementação

Contêm o código-fonte principal (funções, lógica do programa).

#### **.h** – Arquivos de cabeçalho

Declaram funções, constantes e tipos a serem usados em vários arquivos.

---

### 🔹 **3. Estrutura de um Projeto em Múltiplos Arquivos**

**Exemplo de Projeto:**

```
meu_projeto/
│
├── main.c         // Função main
├── calculo.c      // Implementação de funções auxiliares
├── calculo.h      // Declarações das funções de calculo
└── Makefile       // Automatiza a compilação
```

---

### 🔹 **4. Exemplo Prático**

#### **Arquivo: `calculo.h`**

```c
#ifndef CALCULO_H
#define CALCULO_H

int soma(int a, int b);
int multiplica(int a, int b);

#endif
```

#### **Arquivo: `calculo.c`**

```c
#include "calculo.h"

int soma(int a, int b) {
    return a + b;
}

int multiplica(int a, int b) {
    return a * b;
}
```

#### **Arquivo: `main.c`**

```c
#include <stdio.h>
#include "calculo.h"

int main(int argc, char *argv[]) {
    int x = 3, y = 4;
    printf("Soma: %d\n", soma(x, y));
    printf("Multiplicação: %d\n", multiplica(x, y));
    return 0;
}
```

---

### 🔹 **5. Compilação de Vários Arquivos**

Você pode compilar múltiplos arquivos com:

```bash
gcc main.c calculo.c -o programa
```

Ou automatizar com um **Makefile**.

---

### ❌ **Erros Comuns**

* Esquecer de usar `#include "arquivo.h"` nos arquivos que precisam das declarações.
* Repetir definição de função em mais de um arquivo `.c`.
* Não usar `#ifndef / #define` para proteger múltiplas inclusões de headers.
* Esquecer de compilar todos os arquivos `.c` juntos.

---

### 📚 **Conclusão**

Projetos C organizados em múltiplos arquivos melhoram a legibilidade e reutilização de código. Usar corretamente `main(int argc, char *argv[])` permite flexibilidade na execução via terminal. Separar cabeçalhos (`.h`) e implementações (`.c`) é uma prática profissional essencial.


