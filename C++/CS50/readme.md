# CS50

Esse são os codigos que eu fiz e estudei no curso CS50 esse repositorio não esta completo pois ainda não fiz todos os labs

## Mario

em C++ que implementa o problema chamado "Mario" do curso CS50 da Universidade de Harvard. O problema consiste em criar um padrão de escadas de blocos (semelhantes ao jogo "Super Mario") com base na altura fornecida pelo usuário. Vou explicar a sintaxe e o propósito deste programa passo a passo.

<details>

<img align="right" src="https://media.tenor.com/rt_mMSl7f04AAAAj/change-power-up-mario.gif" width="250" alt="Gif do mario">

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

### cash

Este programa é uma parte do curso CS50 da Universidade de Harvard, chamada "Cash." O que ele faz é bastante simples: calcula o número mínimo de moedas que você precisa para representar uma quantia em centavos que você digita.


<details>

<img align="right" src="https://media.tenor.com/s5mXvJJIMnoAAAAC/money-piggy-bank.gif" width="250" alt="cofrinho">

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

### credit

Este programinha faz parte do curso CS50 da Universidade de Harvard, chamado "Credit". Ele se propõe a fazer uma coisa muito importante: verificar se o número de cartão de crédito que você insere é válido e até mesmo descobrir qual empresa emitiu o cartão. Aqui está o que ele faz:

<details>

<img align="right" src="https://media.tenor.com/USxC_Lm8i2AAAAAC/dinheiro-silvio.gif" width="250" alt="cash">

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

## Pset02
<details>

### caesar:

O propósito do programa "caesar" no curso CS50 da Universidade de Harvard é criar uma implementação simples da cifra de César, uma técnica de criptografia que envolve a substituição de letras por outras letras do alfabeto, deslocando-as por um número fixo de posições. Este programa permite ao usuário criptografar mensagens de texto usando a cifra de César.

<details>

<img align="right" src="https://steamuserimages-a.akamaihd.net/ugc/478895907426358672/EFFC9103677B10B8FA67A1812424D1433EDEC025/?imw=5000&imh=5000&ima=fit&impolicy=Letterbox&imcolor=%23000000&letterbox=false" width="250" alt="caesar jojo">

Passo 1: Primeiro, o programa verifica se você digitou tudo corretamente. Ele não quer funcionar a menos que você tenha dado a ele duas coisas: o nome do programa e um número mágico chamado "chave". Se você esquecer disso, o programa vai reclamar.

Passo 2: A "chave" é como a senha para o cofre. É um número que diz ao programa quantos lugares as letras do seu texto serão deslocadas no alfabeto. E, como qualquer senha, você precisa digitá-la corretamente, ou o programa não vai entender.

Passo 3: Agora, o programa pede para você digitar o texto que deseja esconder ou embaralhar. Você digita qualquer coisa que queira, uma mensagem, uma piada, o que vier à mente.

Passo 4: O segredo está aqui! O programa pega o texto que você digitou e o transforma com a tal "chave". Ele mexe nas letras, mas cuida para que as letras maiúsculas continuem maiúsculas e as minúsculas, minúsculas. Os números e símbolos ficam do jeito que estão.

Passo 5: Finalmente, o programa te mostra o texto que passou pela transformação mágica. Você verá o seu texto original, mas agora meio embaralhado por causa da "chave".

E é assim que funciona o "caesar". Ele é uma maneira simples de esconder mensagens, mas não é a mais segura. Portanto, use com sabedoria e apenas para coisas divertidas!
</details>

### Readability

Propósito:
Este programa faz algo bem legal. Ele avalia o quão fácil ou difícil é ler um pedaço de texto. Basicamente, ele analisa o número de palavras, letras e sentenças no texto e calcula uma pontuação com base nisso. Em seguida, ele dá ao texto uma classificação de "legibilidade" com base nessa pontuação.


<details>

<img align="right" src="https://i.pinimg.com/originals/66/9f/e4/669fe4c57105ade508c8b08796f91c25.gif" width="250" alt="Livros">

Estrutura:

Inclusão de Bibliotecas:

Aqui, o programa simplesmente carrega algumas ferramentas padrão do C e C++ que serão usadas ao longo do programa. É como pegar suas ferramentas de análise de texto.
Declaração de Variáveis:

Ele cria uma caixa imaginária chamada text para armazenar o texto que você digitará mais tarde.
Função main:

Esta é a parte principal do programa, como o chefão. Tudo começa aqui.
Entrada do Texto:

Primeiro, ele diz "me conte o texto", e você digita o texto.
Ele guarda o que você digitou na caixa text.
Contagem de Letras, Palavras e Sentenças:

Agora, o programa faz um trabalho de detetive. Ele começa a contar coisas no texto. Quantas letras, quantas palavras e quantas sentenças estão no seu texto.
As contagens são guardadas nas caixas letters, words e sentences.
Cálculo de Legibilidade:

Com as contagens, o programa faz algumas contas malucas. Isso envolve multiplicar, dividir e subtrair coisas. No final, ele obtém um número que representa a "legibilidade" do texto, que é guardado na caixa calculation.
Classificação de Leitura:

Finalmente, ele pega esse número de "legibilidade" e o arredonda para o número inteiro mais próximo, que é chamado de index.
Dependendo do valor de index, ele diz qual é a classificação da leitura. Por exemplo, se index for menor que 1, ele diz que o texto é mais fácil de ler do que uma história de criança.
Objetivo:
Basicamente, este programa é uma ferramenta para avaliar o quão fácil é ler um texto. Ele faz isso analisando o texto e atribuindo uma classificação com base na sua complexidade. É como um juiz de legibilidade para textos.

</details>

### substitution

Propósito:
Este programa, chamado "substitution", é como um código secreto para criptografar mensagens. Ele substitui as letras do alfabeto em uma mensagem de acordo com uma chave fornecida. É como uma máquina de escrever cifrada.

<details>

<img align="right" src="https://media.tenor.com/myntH7qWCCIAAAAC/substitui%C3%A7%C3%A3o-naruto.gif" width="250" alt="Substituição">

Estrutura:

Inclusão de Bibliotecas:

O programa inclui algumas ferramentas padrão do C para entrada/saída e manipulação de strings, como abrir uma caixa de ferramentas.
Função main:

Esta é a parte principal do programa. É onde tudo começa.
Verificação da Chave:

O programa verifica se você forneceu uma chave na linha de comando. Se você não forneceu, ele diz "Hey, você precisa de uma chave!" e o programa para.
A chave é um código secreto que determina como as letras serão substituídas.
Validação da Chave:

Ele verifica se a chave tem exatamente 26 caracteres, porque o alfabeto tem 26 letras.
Em seguida, ele verifica se a chave contém apenas letras e se não há letras repetidas. Queremos uma chave única e sem números ou símbolos.
Entrada de Texto:

Agora, você fornece o texto que deseja criptografar. Ele armazena o texto na variável plaintext.
Cifragem:

A parte mágica! O programa passa por cada letra no seu texto e verifica qual letra ela corresponde na chave. Em seguida, ele imprime a letra correspondente na tela. Isso cria uma versão criptografada da sua mensagem.
Ele cuida das letras maiúsculas e minúsculas separadamente para que a criptografia funcione para ambas.
Resultado:

O programa imprime a mensagem criptografada na tela. Agora, sua mensagem é como um segredo que só pode ser lido por alguém com a chave certa.
Objetivo:
Este programa é uma ferramenta para cifrar mensagens de texto. Ele usa uma chave para substituir as letras do alfabeto na sua mensagem e, assim, proteger seu conteúdo. É uma forma simples de criptografia que pode ser usada para manter suas mensagens privadas.
</details>

</details>