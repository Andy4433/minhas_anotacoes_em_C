// espaço da memoria para amazenar dados.

// sintaxe:
// declaraçao: <tipo><nome>;
// nomeclatura: não pode numero 1ª posição.
// --> não pode caracteres especiais.
// --> não pode espaço
// pode ter letras, _, e numeros no final do nome

// char 8bits  -128 a 127
// int(shot) 16bits  -32.768 a 32.767
// int (long) 32bits -2.147.483.648 a 2.147.483.647
// float 32bits -3.4e38 a 3.4e38.
// double 64bits -1.7e308 a 1.7e308.

// operador= oque esta á direita é atribuido á variavel que está á esquerda o operador
// sintaxe= <variavel> = <informação>;

// constantes diretiva "#define": cria-se um identicador para um dado de qualquer tipo
// mesma regra de nomenclatura de variaveis
// sintaxe declaração:
// #define <nome> <valor>

#include <stdio.h>

#define texto "Entrada e saida de dados."

int main()
{
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("digita sua idade:");
    scanf("\n%d", &idade);

    printf("digita sua altura:");
    scanf("\n%f", &altura);

    printf("digite seu nome: ");
    scanf("\n%s", nome);

    printf("olá %s, que bom de conhecer!!.\n Sua altura é de %.2f, muito bom para sua idade %d.\n", nome, altura, idade);
    
}
