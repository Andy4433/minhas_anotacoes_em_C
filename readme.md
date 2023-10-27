# Programação em C

<img align="right" src="https://media.tenor.com/2c7diqh1oVIAAAAC/anime-computer.gif" width="250" alt="Gif de programação em anime">

 C é uma linguagem de programação de baixo nível e procedural, enquanto C++ estende o C com recursos de programação orientada a objetos. Ambas as linguagens têm aplicações em uma variedade de domínios, com C++ sendo mais comumente usado em desenvolvimento de software moderno devido à sua riqueza de recursos e flexibilidade.




## como rodar Seu programa

### C++:
  <details>

    g++ <Seu_programa.c++> -o <Seu_programa>
    ./<Seu_programa>

  </details>

### C:

 <details>

    make <Seu_programa>
    ./<Seu_programa>

</details>

## Variaveis:
<details>

Variaveis são espaço da memoria para amazenar dados.

### sintaxe:
    declaraçao: <tipo><nome>;

Nomeclatura:

* não pode numero 1ª posição.

* não pode caracteres especiais.

* não pode espaço

* pode ter letras, _, e numeros no final do nome

### tipos de variaveis:

* char 8bits  -128 a 127

* int(shot) 16bits  -32.768 a 32.767

* int (long) 32bits -2.147.483.648 a 2.147.483.647

* float 32bits -3.4e38 a 3.4e38.

* double 64bits -1.7e308 a 1.7e308.


operador = oque esta á direita é atribuido á variavel que está á esquerda o operador:

sintaxe: 

    <variavel> = <informação>;

constantes diretiva "#define": cria-se um identicador para um dado de qualquer tipo
mesma regra de nomenclatura de variaveis

sintaxe declaração:

    #define <nome> <valor>

### exemplo:

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

 </details>

## Saida de dados:

 <details>

sintaxe:  

    printf("<texto>", <v1>,<v2>,...,<vn>); 

posso ter nenhum texto com varias variavei, tambem com texto e sem variavel ou os dois juntos

* d ou i= numeros do tipo int

* x= numeros do tipo int em base de hexadecimal

* f= numeros do tipo float

* e= numeros em notaçao cientifica

* c= caracteristicas alfanumericos

* s= sequencia de caracteres alfanumericos (strings)

* .<num>= especificaa quantos digitos terao depois da virgula

* \a= toca um bipe

* \b backspace

* \n= quebra uma linha

* \t= tabulaçao horizontal

* \r= retorna ao inicio da linha

* \o= caractere nulo

* \v= tabulaçao vertical

* \\= caractere \

* \'= caractere '

* \"= caractere "

* \?= caractere ?

* \123= caractere relacionado ao codigo 123 em octal

* \x12= caractere relacionado ao codigo 12 em hexadecimal

### Exemplo:

    #include <stdio.h>

    int main()
    {
        printf("oi, tudo bem? tenho 6 anos e programo. \n");

        printf("valor inteiro: %d.\n", 10);
        printf("valor real: %f.\n", 3.1459265);
        printf("valor real com apenas duas casa: %.2f.\n", 3.1459265);
        printf("Dado de texto: %c. \n", 'a');
        printf("Dado de texto: %s. \n", "testando");
    }

 </details>

## Entrada de dados:

<details>

sintaxe: 

    (<form.>, &<v1>, &<v2>, ...,&<vN>); 

da para ter 1 ou N variaveis.

sintaxe: 

    (<form.>, <form.>, &<v1>, &<v2>, ...,&<vN>); 

cada form. representa cada variavel espectivamente ou se <1form.>= v1 e <2form.>= v2

* d ou i= numeros do tipo int

* x= numeros do tipo int em base de hexadecimal

* f= numeros do tipo float

* e= numeros em notaçao cientifica

* c= caracteristicas alfanumericos

* s= sequencia de caracteres alfanumericos (strings)

* .<^chars>= lê todos os dados digitados, exceto os especificados em "chars"

### exemplo:


    #include <stdio.h>

    int main()
    {
        int idade = 0;
        int ano = 0;

        printf("valor inicial da idade: %d.\n", idade);

        printf("digite uma idade: ");
        scanf("\n%d", &idade);
        printf("digite o ano de nascimento: ");
        scanf("\n%d", &ano);

        printf("Idade informada: %d.\n", idade);
        printf("ano informado: %d.\n", ano);
    }

</details>

## Operadores:

<details>

Operadores: +,-,*,/ e % -- existe precedencia entre os operadores

operadore de atribuiçao aritimética

incremento em 1 unidade: ++

decremento em uma unidade: --

incremento generico: +=

decremento genérico: -=

atribuiçao com multiplicaçao: *=

atribuiçao com divisao: /=


    #include <stdio.h>

    int main()
    {
        int A, B, soma, subtr, mlt, divis;
        int dado = 10;

        printf("digite um valor:");
        scanf("\n%d", &A);
        printf("digite um segundo valor:");
        scanf("\n%d", &B);

        soma = A + B;
        subtr = A - B;
        mlt = A * B;
        divis = A / B;

        printf("seu resultados:\n ");
        printf("Soma: %d\n", soma);
        printf("Subtra: %d\n", subtr);
        printf("multipli: %d\n", mlt);
        printf("Divisão: %d\n", divis);

        printf(" Dado antes do incremento: %d.\n", dado);
        dado++;
        printf(" Dado depois do incremento: %d.\n", dado);
        dado--;
        printf(" Dado depois do decremento: %d.\n", dado);
        dado += 3;
        printf(" Depois do incremento em 3 unidades: %d.\n", dado);
        dado -= 2;
        printf(" Depois do decremento em 2 unidades: %d.\n", dado);
        dado *= 10;
        printf(" Depois de multiplicar por 10: %d.\n", dado);
        dado /= 10;
        printf(" Depois de dividir por 10: %d.\n", dado);
        dado--;
        printf(" Dado depois do decremento: %d.\n", dado);
    }

</details>

## If e else:

<details>

if-else:

se a condiçao for verdadeira o bloco if é executado e o bloco else é iginorado


Em C, a estrutura else if é usada para verificar múltiplas condições em sequência, assim como em Rust.

Ela permite que você teste várias condições alternativas quando a condição inicial do if for falsa.

sintaxe:

    if (<condição1>) { <bloco de código a ser executado se a condição1 for verdadeira>}

    else if (<condição2>) { <bloco de código a ser executado se a condição2 for verdadeira>}

    else if (<condição3>) { <bloco de código a ser executado se a condição3 for verdadeira>}

    else {<bloco de código a ser executado se nenhuma das condições anteriores for verdadeira>}

exemplo:

    int main()
    {
        float nota1, nota2, nota3, media;
        printf("Insira a nota 1: ");
        scanf("%f", &nota1);

        printf("Insira a nota 2: ");
        scanf("%f", &nota2);

        printf("Insira a nota 3: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7.0)
        {
            printf("Aprovado(a)! %.2f\n", media);
        }
        else if (media >= 4.0 && media < 7.0)
        {
            printf("tem direito a exame! %.2f\n", media);
        }
        else
        {
            printf("reprovado(a) %.2f\n", media);
        }
    }

</details>

## loops while:

<details>

um erro comum de uma variavel onde o conteudo nao é conhecido pelo programador o esqueceu de colocar a instruçao isso é um erro sermantico

### comando while

inicializaçao de uma ou mais ariaveis de controle

definiçao de uma condiçao de parada

enquanto for verdadeira: repete

Atualizaçao das variaveis de controle

CUIDADO: loop infinito

    while (<condição>){
    <bloco_de_comandos>
    }
    
### Exemplo:

    #include <unistd.h>
    #include <stdio.h>
    #include <time.h>
    int main(){

        clock_t start, end;
        double cpu_time_used;

        start=clock(); // Captura o tempo de início


        int i=1;
        int j;
        printf("digite o tempo que voce quer contar: ");
        scanf("\n%d", &j);

        while(i <= j){
            printf("%d\n", i);
            sleep(1); // Aguarda 1 segundo


            i++; // o i++ ele pega o valor de i e soma mais 1 e joga de volta do proprio i
        }
        end =clock(); // Captura o tempo de fim
        cpu_time_used=((double) (end-start))/CLOCKS_PER_SEC; // Calcula o tempo total em segundos
        printf("tempo de execução: %2.f segundos\n",cpu_time_used);
        return 0;
    }

</details>   