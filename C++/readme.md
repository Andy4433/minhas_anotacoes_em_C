### C++

<img align="right" src="https://i.makeagif.com/media/3-24-2016/JrSj8G.gif" width="300" alt="Eleno">


Extensão do C: C++ é uma extensão do C e herda muitas das características do C, incluindo a capacidade de programação de baixo nível. No entanto, C++ também introduz recursos de programação orientada a objetos.

Orientação a Objetos: C++ suporta programação orientada a objetos, o que significa que os programas podem ser estruturados em torno de classes e objetos que representam entidades do mundo real.

Maior Abstração: C++ oferece um nível mais alto de abstração do que C, o que permite que os programadores escrevam código de forma mais eficiente e reutilizável.

STL (Standard Template Library): C++ possui uma biblioteca padrão chamada STL que fornece estruturas de dados e algoritmos prontos para uso, economizando tempo no desenvolvimento de software.

* Linguagem de programação procedural e orientada a objetos

* Tipagem estática

* Compilação para código de máquina

* Manipulações diretas de memória

* Baixo nível de abstração

* Alta eficiência

* Usada em sistemas operacionais, compiladores, drivers de dispositivos, jogos, etc.

## iostream ou stdio.h ?

 <details>

C++, é geralmente preferível usar a biblioteca iostream em vez de <stdio.h> (ou cstdio em C++) para entrada e saída. Aqui estão algumas razões pelas quais iostream é mais comumente usada:

Orientação a objetos: <iostream> é baseada em classes e objetos, o que torna a manipulação de entrada e saída mais orientada a objetos. Isso facilita a leitura e escrita de dados com tipos personalizados e fornece uma interface mais intuitiva.

Maior segurança de tipos: iostream fornece maior segurança de tipos, o que significa que é menos propenso a erros de tipos do que <stdio.h>. Os operadores << e >> são usados para formatar e interpretar dados de forma mais segura.

Melhor suporte para internacionalização: <iostream> oferece melhor suporte para internacionalização, facilitando a manipulação de caracteres especiais e codificações de caracteres diferentes.

Efeito colateral mínimo: iostream não utiliza macros nem funções de alto nível que podem ter efeitos colaterais indesejados. Isso torna o código mais previsível e seguro.

Integrado com o sistema de exceções: iostream está integrado com o sistema de exceções em C++, o que permite lidar com erros de entrada/saída de forma mais robusta e mais eficaz.

No entanto, <stdio.h> (ou cstdio em C++) ainda é amplamente usado, especialmente em código legado e em situações onde a interoperabilidade com código C é necessária. Além disso, em alguns cenários específicos de alto desempenho, stdio pode ser mais eficiente em termos de velocidade.

</details>


## oistream

 <details>

    #include <iostream>

    int main() {
        // Para imprimir dados na saída padrão (normalmente a tela):
        std::cout << "Olá, mundo!" << std::endl;

        // Para ler dados da entrada padrão:
        int numero;
        std::cout << "Digite um número: ";
        std::cin >> numero;
        std::cout << "Você digitou: " << numero << std::endl;

        return 0;
    }

#include <iostream>: Isso inclui a biblioteca iostream para que você possa usar as classes e objetos relacionados a entrada e saída.

std::cout: std::cout é um objeto da classe std::ostream, que é usado para imprimir dados na saída padrão.

<<: O operador de inserção (<<) é usado para enviar dados para std::cout. Você pode usá-lo para imprimir valores de diferentes tipos, como strings, números e objetos personalizados.

"Olá, mundo!": Isso é o que será impresso na tela, uma string que contém o texto "Olá, mundo!".

std::endl: Isso insere uma nova linha na saída, movendo o cursor para a próxima linha.

std::cin: std::cin é um objeto da classe std::istream, que é usado para ler dados da entrada padrão.

(>>:) O operador de extração (>>) é usado para extrair dados de std::cin. Ele permite que você leia valores de diferentes tipos.

int numero;: Declara uma variável numero para armazenar o número que o usuário irá digitar.

std::cout << "Digite um número: ";: Isso imprime uma mensagem pedindo ao usuário para digitar um número.

std::cin >> numero;: Isso lê um número da entrada padrão e o armazena na variável numero.

std::cout << "Você digitou: " << numero << std::endl;: Isso imprime o número que o usuário digitou.

return 0;: O programa termina e retorna 0 para indicar que foi executado com sucesso.

</details>

