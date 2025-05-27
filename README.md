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