
/*
 * ============================================================
 * INTRODUÇÃO À PROGRAMAÇÃO EM C
 * ============================================================
 *
 * Conteúdo:
 *  01. Bibliotecas e diretivas
 *  02. Tipos de dados
 *  03. Constantes e variáveis
 *  04. Operadores aritméticos
 *  05. Operadores de endereço e ponteiros
 *  06. Especificadores de entrada e saída
 *  07. Caracteres de escape
 *  08. Entrada e saída de dados
 *  09. Exemplos práticos
 *  10. Perguntas e respostas
 *
 * ============================================================
 */


/*
 * ============================================================
 * 01. BIBLIOTECAS E DIRETIVAS
 * ============================================================
 *
 * #include:
 * Diretiva de pré-processamento responsável por incluir
 * declarações de outros arquivos antes da compilação.
 *
 * <stdio.h>:
 * Biblioteca padrão de entrada e saída (Standard Input/Output).
 *
 * Disponibiliza funções como:
 *
 * printf() -> Escreve dados na saída padrão (stdout).
 * scanf()  -> Lê dados formatados da entrada padrão (stdin).
 * getchar() -> Lê um caractere da entrada padrão.
 * putchar() -> Escreve um caractere na saída padrão.
 * fgets() -> Lê uma linha de texto.
 *
 * IMPORTANTE:
 * #include é uma diretiva do pré-processador, não uma
 * palavra reservada da linguagem C.
 * ============================================================
 */

#include <stdio.h>


/*
 * ============================================================
 * 02. TIPOS DE DADOS
 * ============================================================
 *
 * int:
 * Armazena números inteiros.
 * Exemplo: 10, -5, 100.
 * Geralmente possui 32 bits, mas depende da implementação.
 *
 * float:
 * Armazena números reais em precisão simples.
 * Geralmente utiliza 32 bits.
 *
 * double:
 * Armazena números reais em precisão dupla.
 * Geralmente utiliza 64 bits.
 *
 * char:
 * Armazena um valor de tamanho equivalente a um byte.
 * Frequentemente utilizado para representar caracteres.
 *
 * char nome[50]:
 * Declara um array de 50 elementos do tipo char.
 * Pode armazenar uma string com até 49 caracteres de um byte,
 * reservando um elemento para o terminador '\0'.
 *
 * void:
 * Indica ausência de valor.
 * Muito utilizado em funções sem retorno.
 *
 * Exemplos:
 *
 * int idade = 20;
 * float altura = 1.75f;
 * double pi = 3.14159;
 * char letra = 'A';
 * char nome[50] = "HENRY";
 *
 * ============================================================
 */


/*
 * ============================================================
 * 03. VARIÁVEIS E CONSTANTES
 * ============================================================
 *
 * VARIÁVEL:
 * Identificador associado a um objeto cujo valor pode
 * ser modificado durante a execução.
 *
 * Sintaxe:
 *
 * tipo nomeVariavel = valor;
 *
 * Exemplo:
 *
 * int idade = 20;
 *
 * CONSTANTE COM CONST:
 * A palavra reservada const qualifica um objeto,
 * impedindo sua modificação através desse identificador.
 *
 * Exemplo:
 *
 * const double PI = 3.14159;
 *
 * ============================================================
 */


/*
 * ============================================================
 * 04. OPERADORES ARITMÉTICOS
 * ============================================================
 *
 * +  -> Adição
 * -  -> Subtração
 * *  -> Multiplicação
 * /  -> Divisão
 * %  -> Resto da divisão inteira (módulo)
 *
 * EXEMPLOS:
 *
 * 10 + 5 = 15
 * 10 - 5 = 5
 * 10 * 5 = 50
 * 10 / 5 = 2
 * 10 % 3 = 1
 *
 * DIVISÃO INTEIRA:
 *
 * Em C, quando os dois operandos são inteiros,
 * o resultado da divisão também é inteiro.
 *
 * Exemplo:
 *
 * 7 / 2 = 3
 *
 * A parte fracionária é descartada.
 *
 * Para obter um resultado decimal:
 *
 * 7.0 / 2 = 3.5
 *
 * IMPORTANTE:
 *
 * // NÃO é operador de divisão inteira em C.
 * // inicia um comentário de linha.
 *
 * ** NÃO é operador de exponenciação em C.
 * Para calcular potências, pode-se utilizar pow(),
 * declarada em <math.h>.
 *
 * ============================================================
 */


/*
 * ============================================================
 * 05. OPERADORES DE ENDEREÇO E PONTEIROS
 * ============================================================
 *
 * & -> Operador de endereço (address-of).
 *
 * Quando utilizado como operador unário, retorna
 * o endereço de memória de um objeto.
 *
 * Exemplo:
 *
 * int idade = 20;
 *
 * &idade -> Endereço de memória da variável idade.
 *
 * OUTRO SIGNIFICADO:
 *
 * Quando utilizado entre dois operandos inteiros,
 * & representa o operador AND bit a bit.
 *
 * Exemplo:
 *
 * 5 & 3 = 1
 *
 * ------------------------------------------------------------
 * PONTEIROS
 * ------------------------------------------------------------
 *
 * Um ponteiro é uma variável que armazena um endereço.
 *
 * Exemplo:
 *
 * int idade = 20;
 * int *ponteiro = &idade;
 *
 * &idade   -> Obtém o endereço de idade.
 * ponteiro -> Armazena esse endereço.
 * *ponteiro -> Acessa o valor apontado.
 *
 * O operador * pode representar:
 *
 * 1. Multiplicação entre valores.
 * 2. Indireção (desreferenciação) de um ponteiro.
 *
 * ============================================================
 */


/*
 * ============================================================
 * 06. ESPECIFICADORES DE ENTRADA E SAÍDA
 * ============================================================
 *
 * Utilizados em funções como printf() e scanf().
 *
 * ------------------------------------------------------------
 * ESPECIFICADORES MAIS COMUNS
 * ------------------------------------------------------------
 *
 * %d  -> Inteiro decimal com sinal (int).
 * %i  -> Inteiro (int).
 * %u  -> Inteiro decimal sem sinal (unsigned int).
 * %f  -> Número de ponto flutuante.
 * %c  -> Caractere.
 * %s  -> String (sequência de caracteres).
 * %p  -> Endereço de ponteiro.
 * %x  -> Inteiro hexadecimal (letras minúsculas).
 * %X  -> Inteiro hexadecimal (letras maiúsculas).
 * %o  -> Inteiro em representação octal.
 * %%  -> Imprime o caractere %.
 *
 * %b:
 * Representação binária em versões modernas do C
 * e implementações que oferecem suporte.
 * Não é portátil para todos os compiladores/padrões.
 *
 * IMPORTANTE:
 * %h isolado NÃO é especificador hexadecimal.
 * Para hexadecimal, utilize %x ou %X.
 *
 * ------------------------------------------------------------
 * DIFERENÇA ENTRE PRINTF() E SCANF()
 * ------------------------------------------------------------
 *
 * printf():
 *
 * %f  -> Recebe double (float é promovido a double).
 * %lf -> Também é aceito para double.
 *
 * scanf():
 *
 * %f  -> Espera um ponteiro para float.
 * %lf -> Espera um ponteiro para double.
 *
 * ------------------------------------------------------------
 * FORMATAÇÃO DE SAÍDA
 * ------------------------------------------------------------
 *
 * %.2f -> Imprime duas casas decimais.
 * %.3f -> Imprime três casas decimais.
 * %5d  -> Campo com largura mínima de cinco caracteres.
 * %-5d -> Alinha o valor à esquerda no campo.
 *
 * Exemplos:
 *
 * printf("%.2f", 3.14159);
 * Saída: 3.14
 *
 * printf("%05d", 42);
 * Saída: 00042
 *
 * ------------------------------------------------------------
 * ENTRADA COM SCANF()
 * ------------------------------------------------------------
 *
 * int idade;
 * float altura;
 * double peso;
 * char letra;
 *
 * scanf("%d", &idade);
 * scanf("%f", &altura);
 * scanf("%lf", &peso);
 * scanf(" %c", &letra);
 *
 * O & fornece o endereço onde scanf() armazenará
 * o valor convertido.
 *
 * Para arrays de caracteres:
 *
 * char nome[50];
 * scanf("%49s", nome);
 *
 * O nome do array é convertido em ponteiro para
 * seu primeiro elemento nessa expressão.
 *
 * ============================================================
 */


/*
 * ============================================================
 * 07. CARACTERES DE ESCAPE
 * ============================================================
 *
 * \n  -> Nova linha (New Line).
 * \t  -> Tabulação horizontal.
 * \0  -> Caractere nulo (valor zero).
 * \\  -> Barra invertida.
 * \"  -> Aspas duplas.
 * \'  -> Aspas simples.
 * \r  -> Retorno de carro.
 * \b  -> Retrocesso (Backspace).
 *
 * ------------------------------------------------------------
 * EXEMPLO
 * ------------------------------------------------------------
 *
 * printf("LINHA 1\nLINHA 2");
 *
 * Saída:
 *
 * LINHA 1
 * LINHA 2
 *
 * ------------------------------------------------------------
 * TERMINADOR DE STRING
 * ------------------------------------------------------------
 *
 * Uma string em C é uma sequência de caracteres
 * terminada pelo caractere nulo '\0'.
 *
 * Exemplo:
 *
 * char nome[] = "HENRY";
 *
 * Representação:
 *
 * ['H']['E']['N']['R']['Y']['\0']
 *
 * O compilador adiciona automaticamente '\0'
 * ao final de uma string literal inicializada
 * dessa maneira.
 *
 * ============================================================
 */


/*
 * ============================================================
 * 08. ENTRADA, PROCESSAMENTO E SAÍDA
 * ============================================================
 *
 * Um programa pode ser representado pelo modelo:
 *
 * ENTRADA -> PROCESSAMENTO -> SAÍDA
 *
 * ENTRADA:
 * Recebimento de informações.
 *
 * Exemplo:
 * scanf("%d", &idade);
 *
 * PROCESSAMENTO:
 * Execução de operações sobre os dados.
 *
 * Exemplo:
 * media = (nota1 + nota2) / 2;
 *
 * SAÍDA:
 * Apresentação do resultado.
 *
 * Exemplo:
 * printf("Media: %.2f\n", media);
 *
 * Nem todo programa precisa necessariamente
 * receber entrada ou apresentar saída.
 *
 * ============================================================
 */


/*
 * ============================================================
 * 09. EXEMPLOS PRÁTICOS
 * ============================================================
 */


/*
 * ------------------------------------------------------------
 * EXEMPLO 1 — CÁLCULO DA ÁREA DO CÍRCULO
 * ------------------------------------------------------------
 *
 * Fórmula:
 *
 * Área = PI * raio²
 *
 * Em C, utilizamos:
 *
 * PI * (raio * raio)
 *
 * ------------------------------------------------------------
 */

void exemploAreaCirculo(void)
{
    const double PI = 3.14159;

    double raio = 2.0;

    double areaCalculada = PI * (raio * raio);

    printf("VALOR DA AREA CALCULADA: %.2f\n",
           areaCalculada);
}


/*
 * ------------------------------------------------------------
 * EXEMPLO 2 — INT E CHAR
 * ------------------------------------------------------------
 *
 * int  -> Número inteiro.
 * char -> Caractere.
 *
 * Caracteres individuais utilizam aspas simples.
 *
 * ------------------------------------------------------------
 */

void exemploIntChar(void)
{
    int idade = 20;

    char vogal = 'A';

    printf("IDADE: %d\n", idade);
    printf("VOGAL: %c\n", vogal);
}


/*
 * ------------------------------------------------------------
 * EXEMPLO 3 — STRINGS
 * ------------------------------------------------------------
 *
 * Em C, strings normalmente são armazenadas
 * em arrays de char.
 *
 * Aspas duplas delimitam strings literais.
 * Aspas simples delimitam constantes de caractere.
 *
 * ------------------------------------------------------------
 */

void exemploString(void)
{
    char nome[50] = "HENRY PHIETRO AGUIAR DA SILVA";

    printf("NOME: %s\n", nome);
}


/*
 * ------------------------------------------------------------
 * EXEMPLO 4 — ENDEREÇO DE MEMÓRIA
 * ------------------------------------------------------------
 *
 * O operador & obtém o endereço da variável.
 *
 * O especificador %p imprime um endereço.
 *
 * O argumento deve ser convertido para void *.
 *
 * ------------------------------------------------------------
 */

void exemploEnderecoMemoria(void)
{
    int idade = 18;

    printf("IDADE: %d\n", idade);

    printf("ENDERECO DE idade: %p\n",
           (void *)&idade);

    int idade2 = 0;

    printf("ESCREVA SUA NOVA IDADE: ");

    if (scanf("%d", &idade2) != 1) {
        printf("ENTRADA INVALIDA!\n");
        return;
    }

    printf("IDADE2: %d\n", idade2);

    printf("ENDERECO DE idade2: %p\n",
           (void *)&idade2);
}


/*
 * ------------------------------------------------------------
 * EXEMPLO 5 — CÁLCULO DE MÉDIA
 * ------------------------------------------------------------
 *
 * ENTRADA:
 * Duas notas.
 *
 * PROCESSAMENTO:
 * Soma das notas dividida por dois.
 *
 * SAÍDA:
 * Média calculada.
 *
 * ------------------------------------------------------------
 */

void exemploMedia(void)
{
    float nota1, nota2, media;

    printf("ESCREVA A NOTA 1: ");

    if (scanf("%f", &nota1) != 1) {
        printf("ENTRADA INVALIDA!\n");
        return;
    }

    printf("ESCREVA A NOTA 2: ");

    if (scanf("%f", &nota2) != 1) {
        printf("ENTRADA INVALIDA!\n");
        return;
    }

    media = (nota1 + nota2) / 2.0f;

    printf("MEDIA: %.2f\n", media);
}


/*
 * ------------------------------------------------------------
 * EXEMPLO 6 — TIPOS E FORMATAÇÃO
 * ------------------------------------------------------------
 *
 * float:
 * Número real de precisão simples.
 *
 * %.2f:
 * Formata a saída com duas casas decimais.
 *
 * ------------------------------------------------------------
 */

void exemploTipos(void)
{
    int idade = 16;

    float altura = 1.75f;

    char letra = 'A';

    printf("IDADE: %d\n", idade);

    printf("ALTURA: %.2f\n", altura);

    printf("LETRA: %c\n", letra);
}


/*
 * ------------------------------------------------------------
 * ATIVIDADE 2 — CÁLCULO DE GASTOS COM PASSAGENS
 * ------------------------------------------------------------
 *
 * OBJETIVO:
 * Calcular o gasto mensal com transporte para as aulas.
 *
 * ENTRADAS:
 *
 * valorPassagem -> Valor de uma passagem.
 * qtdDias       -> Quantidade de dias de aula.
 *
 * PROCESSAMENTO:
 *
 * valorGasto = valorPassagem * 2 * qtdDias;
 *
 * O número 2 representa:
 * 1 passagem de ida + 1 passagem de volta.
 *
 * SAÍDAS:
 *
 * Quantidade de dias.
 * Valor unitário da passagem.
 * Valor total gasto.
 *
 * ------------------------------------------------------------
 */

void atividadePassagem(void)
{
    printf("INICIO PROGRAMA\n");

    float valorPassagem;
    int qtdDias;

    // ENTRADA DE DADOS

    printf("QUAL O VALOR DA PASSAGEM: ");

    if (scanf("%f", &valorPassagem) != 1) {
        printf("VALOR INVALIDO!\n");
        return;
    }

    printf("QTD DE DIAS DE AULA: ");

    if (scanf("%d", &qtdDias) != 1) {
        printf("QUANTIDADE INVALIDA!\n");
        return;
    }

    // PROCESSAMENTO

    float valorGasto = valorPassagem * 2 * qtdDias;

    // SAÍDA DE DADOS

    printf("\n");
    printf("QTD DIAS MES: %d\n", qtdDias);
    printf("VALOR PASSAGEM: R$ %.2f\n", valorPassagem);
    printf("RESULTADO: R$ %.2f\n", valorGasto);
    printf("FIM PROGRAMA\n");
}


/*
 * ============================================================
 * 10. FUNÇÃO PRINCIPAL — MAIN()
 * ============================================================
 *
 * A função main() é o ponto de entrada usual
 * de um programa C hospedado.
 *
 * int:
 * Indica que a função retorna um valor inteiro.
 *
 * void:
 * Indica que a função não recebe argumentos.
 *
 * return 0:
 * Indica término bem-sucedido do programa.
 *
 * Para testar outro exemplo, substitua a chamada
 * atividadePassagem() pela função desejada.
 *
 * ============================================================
 */

int main(void)
{
    // Escolha um exemplo para executar:

    // exemploAreaCirculo();
    // exemploIntChar();
    // exemploString();
    // exemploEnderecoMemoria();
    // exemploMedia();
    // exemploTipos();

    atividadePassagem();

    return 0;
}


/*
 * ============================================================
 * 11. PERGUNTAS DO PROFESSOR
 * ============================================================
 *
 * 1) O que é módulo?
 *
 * R: Em operações aritméticas com inteiros,
 * o operador % calcula o resto da divisão.
 *
 * Exemplo:
 * 10 % 3 = 1.
 *
 * ------------------------------------------------------------
 *
 * 2) O que é um header (cabeçalho)?
 *
 * R: É um arquivo que normalmente contém
 * declarações de funções, tipos, macros e outros
 * elementos utilizados pelo programa.
 *
 * Exemplo:
 * #include <stdio.h>
 *
 * ------------------------------------------------------------
 *
 * 3) O que é a função main()?
 *
 * R: É o ponto de entrada usual de execução
 * de um programa C hospedado.
 *
 * ------------------------------------------------------------
 *
 * 4) O que é um tipo de dado?
 *
 * R: Define a categoria e as características
 * dos valores que uma variável pode armazenar,
 * além das operações permitidas.
 *
 * ------------------------------------------------------------
 *
 * 5) O que é o tipo char?
 *
 * R: É um tipo inteiro de um byte,
 * frequentemente utilizado para armazenar
 * códigos de caracteres.
 *
 * Exemplo:
 * char letra = 'A';
 *
 * ------------------------------------------------------------
 *
 * 6) Qual destes não é um operador aritmético?
 *
 * + - * / &
 *
 * R: O operador &.
 *
 * Quando unário, obtém o endereço de um objeto.
 *
 * Quando binário, realiza uma operação AND
 * bit a bit entre operandos inteiros.
 *
 * ------------------------------------------------------------
 *
 * 7) Qual a diferença entre printf() e scanf()?
 *
 * R:
 *
 * printf() -> Saída formatada de dados.
 * scanf()  -> Entrada formatada de dados.
 *
 * ------------------------------------------------------------
 *
 * 8) Qual a diferença entre %d e %i?
 *
 * R:
 *
 * No printf(), ambos apresentam inteiros
 * com sinal em representação decimal.
 *
 * No scanf():
 *
 * %d -> Interpreta entrada decimal.
 * %i -> Detecta a base pelo prefixo,
 *       como 0x para hexadecimal e
 *       0 para octal.
 *
 * ------------------------------------------------------------
 *
 * 9) Qual a diferença entre & e *?
 *
 * R:
 *
 * &variavel -> Obtém seu endereço.
 * *ponteiro -> Acessa o objeto apontado.
 *
 * Exemplo:
 *
 * int numero = 10;
 * int *ptr = &numero;
 *
 * printf("%d", *ptr);
 *
 * Saída: 10.
 *
 * ============================================================
 */
