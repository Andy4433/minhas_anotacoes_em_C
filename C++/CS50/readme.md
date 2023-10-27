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

## Pset01
<details>

## cash

<details>
<img align="right" src="https://media.tenor.com/s5mXvJJIMnoAAAAC/money-piggy-bank.gif" width="250" alt="cofrinho">

Este programa é uma parte do curso CS50 da Universidade de Harvard, chamada "Cash." O que ele faz é bastante simples: calcula o número mínimo de moedas que você precisa para representar uma quantia em centavos que você digita.

* Inclusão de Bibliotecas:
Primeiro, ele inclui algumas "ferramentas" que ajudam o programa a fazer coisas como mostrar mensagens na tela e fazer cálculos.

* Função get_cents:
Aqui, o programa pede que você insira o número de centavos que deseja. Ele verifica se o valor é maior ou igual a zero (porque não faz sentido ter centavos negativos).

* Funções calculate_quarters, calculate_dimes, calculate_nickels e calculate_pennies:
Essas funções são como pequenas máquinas de contar moedas. Elas calculam quantos quartos, dimes, nickels e pennies são necessários para representar a quantia de centavos que você digitou. Imagine contar as moedas na sua mão até que não seja mais possível contar mais do mesmo tipo.

* Função main:
Aqui, o programa começa a funcionar de verdade. Ele chama a função get_cents para obter o número de centavos que você quer.

* Cálculo das Moedas:
O programa começa a calcular o número de quartos, dimes, nickels e pennies. À medida que ele faz esses cálculos, ele vai subtraindo essas moedas dos centavos que ainda precisam ser contados.

* Cálculo do Total de Moedas:
Finalmente, ele adiciona o número de todas as moedas para saber quantas você precisa no total.

* Impressão do Resultado:
Ele mostra o resultado na tela, dizendo quantas moedas você precisa no total.

Em resumo, esse programa é como um caixa eletrônico que calcula o troco para você de forma rápida e eficiente. É uma forma de simular a contagem de moedas e notas em um caixa eletrônico.

</details>

## credit

<details>

<img align="right" src="https://media.tenor.com/USxC_Lm8i2AAAAAC/dinheiro-silvio.gif" width="250" alt="cash">

Este programinha faz parte do curso CS50 da Universidade de Harvard, chamado "Credit". Ele se propõe a fazer uma coisa muito importante: verificar se o número de cartão de crédito que você insere é válido e até mesmo descobrir qual empresa emitiu o cartão. Aqui está o que ele faz:

* Inclusão de Bibliotecas:
No começo, ele meio que puxa algumas "ferramentas" para poder escrever coisas na tela e também para fazer alguns cálculos. E é como dizer, "Ei, programa, você precisa dessas coisas para funcionar direito".

* Função main:
Aqui é onde a ação acontece. Ele pede para você digitar um número de cartão de crédito, e então faz um monte de cálculos nos números desse cartão. O programa também tenta descobrir quantos dígitos o número do cartão tem.

* Validação do Número de Cartão de Crédito:
Ele quebra o número do cartão em pedacinhos menores, que são como quebras de 16 dígitos (do card1 ao card16). Depois, ele faz algumas coisas malucas com esses dígitos, como duplicar alguns e somar os dígitos resultantes. Essas regras são baseadas nas empresas de cartão de crédito.

* Soma dos Dígitos:
O programa adiciona todos os resultados desses cálculos estranhos e obtém a soma total em duas partes, sum1 e sum2.

* Identificação da Empresa do Cartão:
Aqui, o programa olha para o número de dígitos do cartão e tenta ver se ele se encaixa em faixas específicas que identificam qual empresa emitiu o cartão. Como se fosse um detetive de cartão de crédito!

* Verificação de Validade:
É a hora da verdade! O programa verifica se a soma total (sum3) pode ser dividida por 10. Se não puder, o cartão é rejeitado e o programa mostra "invalid" na tela.

* Verificação da Empresa do Cartão:
Por último, ele confere se o número do cartão se encaixa nas faixas específicas de identificação das empresas, como Visa, American Express (Amex) e Mastercard. Se tudo estiver certo, ele diz o nome da empresa na tela.

Em resumo, o programa faz uma verificação no seu número de cartão de crédito para ver se ele é válido e ainda tenta adivinhar qual empresa emitiu o cartão. É como um Sherlock Holmes dos cartões de crédito!

</details>
</details>