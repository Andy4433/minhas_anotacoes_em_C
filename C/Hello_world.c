// biblliotecas
#include <stdio.h>
#include <stdlib.h>

// Em C e C++, int main() é a função principal do programa. É o ponto de entrada para a execução do código.
// Tudo que esta dentro das Chaves ({}) sera executado pela maquina.
int main()
{
    printf("Hello, world! \n");
    system("pause"); // O system no esta na biblioteca stdio.h por isso temos que incluir a biblioteca stdlib.h.
}

// conclusão: No seu exemplo, o código dentro da função main() é simples.
// Ele imprime a mensagem "Hello, world!" na tela usando printf, que está na biblioteca stdio.h.
// Em seguida, usa system("pause") para pausar a execução do programa até que o usuário pressione alguma tecla.
// A função system está na biblioteca stdlib.h.
// Essa é uma estrutura básica para um programa em C ou C++. A partir da função main(), você pode chamar outras funções,
// criar variáveis, fazer operações e construir a lógica do seu programa.
