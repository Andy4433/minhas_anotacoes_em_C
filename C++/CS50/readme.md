# CS50

Esse são os codigos que eu fiz e estudei no curso CS50 esse repositorio não esta completo pois ainda não fiz todos os labs

## Mario

<details>

<img align="right" src="https://media.tenor.com/rt_mMSl7f04AAAAj/change-power-up-mario.gif" width="250" alt="Gif do mario">

em C++ que implementa o problema chamado "Mario" do curso CS50 da Universidade de Harvard. O problema consiste em criar um padrão de escadas de blocos (semelhantes ao jogo "Super Mario") com base na altura fornecida pelo usuário. Vou explicar a sintaxe e o propósito deste programa passo a passo.

Inclusão de Bibliotecas:

#include <stdio.h>: Inclui a biblioteca padrão de entrada e saída em C, que é usada para entrada/saída de dados.
#include <iostream>: Inclui a biblioteca de entrada/saída do C++.
using std::cout;, using std::cin;, using std::endl;: Declara o uso do espaço de nomes std para que você possa usar cout para impressão na tela, cin para entrada de dados e endl para uma nova linha.
Função main:

int main(void): Esta é a função principal do programa, que não recebe argumentos e retorna um valor inteiro.
int height, row, column, space;: Declara quatro variáveis inteiras: height (altura da escada), row (linha atual), column (coluna atual) e space (espaço em branco).
Solicitar a Altura da Escada:

O programa usa um loop do-while para solicitar a altura da escada (height) ao usuário.
do ... while (height < 1 || height > 8): O loop continuará a pedir a altura até que o valor esteja dentro do intervalo entre 1 e 8, inclusive.
Construção da Escada:

O programa entra em um loop for para construir a escada, onde row representa a linha atual da escada.
for (row = 0; row < height; row++): O loop externo itera pelas linhas da escada, onde row varia de 0 até height - 1.
Impressão de Espaços em Branco:

Um loop for interno é usado para imprimir espaços em branco à esquerda da escada.
for (space = 0; space < height - row - 1; space++): O número de espaços em branco é calculado com base na altura da escada e na linha atual (row). Ele diminui à medida que as linhas aumentam.
printf(" ");: Isso imprime um espaço em branco.
Impressão de Blocos:

Dois loops for são usados para imprimir os blocos da escada.
O primeiro loop for imprime os blocos na parte esquerda da escada.
for (column = 0; column <= row; column++): O número de blocos é igual ao número da linha atual (row) mais 1.
printf("#");: Isso imprime um bloco.
printf(" ");: Isso imprime dois espaços em branco para criar um espaço entre os dois lados da escada.
O segundo loop for imprime os blocos na parte direita da escada.
Nova Linha:

printf("\n");: Isso imprime uma nova linha após cada linha da escada.
O programa, portanto, solicita ao usuário a altura desejada para a escada (entre 1 e 8), constrói a escada com base na entrada e a imprime na tela, criando um padrão de blocos que se assemelha ao jogo "Super Mario". O número de blocos em cada linha aumenta de acordo com o número da linha.

</details>

## cash

<details>
<img align="right" src="https://media.tenor.com/s5mXvJJIMnoAAAAC/money-piggy-bank.gif" width="250" alt="cofrinho">

 parte do problema chamado "Cash" do curso CS50 da Universidade de Harvard. O objetivo deste programa é calcular o número mínimo de moedas (quartos, dimes, nickels e pennies) necessárias para representar uma quantia em centavos fornecida pelo usuário. Vou explicar a sintaxe e o propósito deste programa passo a passo:

Inclusão de Bibliotecas:

#include <stdio.h>: Inclui a biblioteca padrão de entrada e saída em C, que é usada para impressão na tela.
#include <iostream>: Inclui a biblioteca de entrada/saída do C++.
using std::cout;, using std::cin;, using std::endl;: Declara o uso do espaço de nomes std para que você possa usar cout para impressão na tela, cin para entrada de dados e endl para uma nova linha.
Função get_cents:

int get_cents(void): Essa função solicita ao usuário o número de centavos e retorna o valor inserido.
Usa um loop do-while para garantir que a entrada seja maior ou igual a zero.
Funções calculate_quarters, calculate_dimes, calculate_nickels e calculate_pennies:

Cada uma dessas funções calcula o número de moedas de um determinado valor (quartos, dimes, nickels ou pennies) necessárias para representar a quantia em centavos fornecida como argumento.
Elas usam um loop while para subtrair o valor da moeda correspondente do total de centavos e incrementar o contador dessa moeda até que a quantidade de centavos restantes seja menor que o valor da moeda.
Função main:

int main(void): Esta é a função principal do programa, que não recebe argumentos e retorna um valor inteiro.
Chama a função get_cents para obter a entrada do usuário e armazena o valor em cents.
Cálculo das Moedas:

Calcula o número de quartos, dimes, nickels e pennies usando as funções calculate_quarters, calculate_dimes, calculate_nickels e calculate_pennies, respectivamente.
À medida que cada tipo de moeda é calculado, o valor correspondente é subtraído dos centavos restantes.
Cálculo do Total de Moedas:

Calcula o total de moedas somando o número de quartos, dimes, nickels e pennies.
Impressão do Resultado:

printf("%i moedas\n", coins);: Isso imprime na tela o número total de moedas necessárias para representar a quantia de centavos inserida.
O programa permite que o usuário insira uma quantia em centavos e, em seguida, calcula a quantidade mínima de moedas necessárias para representar essa quantia em quartos, dimes, nickels e pennies. O programa é uma simulação simples de um caixa eletrônico, onde o objetivo é fornecer o menor número de moedas possível como troco.

</details>

## credit

<img align="right" src="https://pa1.aminoapps.com/6910/9679d0dc653d0b9f7d4df46f4f3f3126694231e1r1-500-455_hq.gif
" width="250" alt="dinheiro voando">

Este programa em C++ é parte do problema chamado "Credit" do curso CS50 da Universidade de Harvard. O objetivo deste programa é verificar a validade de números de cartão de crédito e determinar qual empresa emitiu o cartão com base em seus dígitos e em uma fórmula de soma. Vou explicar a sintaxe e o propósito deste programa passo a passo:

Inclusão de Bibliotecas:

#include <stdio.h>: Inclui a biblioteca padrão de entrada e saída em C, usada para impressão na tela.
#include <iostream>: Inclui a biblioteca de entrada/saída do C++.
using std::cout;, using std::cin;, using std::endl;: Declara o uso do espaço de nomes std para que você possa usar cout para impressão na tela, cin para entrada de dados e endl para uma nova linha.
#include <string>: Inclui a biblioteca C++ para manipulação de strings, embora não seja usada neste código.
Função main:

int main(void): Esta é a função principal do programa, que não recebe argumentos e retorna um valor inteiro.
Solicita ao usuário que insira um número de cartão de crédito, armazenando-o em uma variável chamada card.
Validação do Número de Cartão de Crédito:

Divide o número do cartão em 16 dígitos separados (card1 a card16).
Realiza uma série de cálculos em cada conjunto de dígitos, como a duplicação de alguns dígitos, seguida de adição dos dígitos resultantes, conforme as regras das principais empresas de cartão de crédito.
Soma dos Dígitos:

Calcula a soma total de sum1 e sum2 usando os resultados dos cálculos de dígitos.
Identificação da Empresa do Cartão:

Determina o comprimento do número do cartão contando quantos dígitos existem usando um loop while.
Em seguida, isola os primeiros dígitos do cartão para verificar se o número se encaixa nas faixas específicas de identificação de empresa.
Verificação de Validade:

Verifica se a soma total (sum3) é divisível por 10. Se não for, o cartão é considerado inválido e o programa imprime "invalid" na tela.
Verificação da Empresa do Cartão:

Verifica se o número do cartão se encaixa nas faixas específicas de identificação de empresa, como Visa, American Express (Amex) e Mastercard.
Se for encontrado um número válido e as condições corretas forem atendidas, o programa imprime o nome da empresa do cartão.
Saída:

O programa imprime "invalid" se o número do cartão não for válido ou não corresponder a nenhuma das empresas mencionadas.
O programa permite ao usuário inserir um número de cartão de crédito e determina se o número é válido ou não, bem como a empresa emissora do cartão, se aplicável. É uma simulação de como os sistemas de verificação de cartões de crédito podem funcionar.