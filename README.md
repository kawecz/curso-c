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
