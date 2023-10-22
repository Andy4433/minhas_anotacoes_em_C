// if-else:
// se a condiçao for verdadeira o bloco if é executado e o bloco else é iginorado
// se a codiçao for falsa o bloco if é iginorado e é executado o bloco else
// Em C, a estrutura else if é usada para verificar múltiplas condições em sequência, assim como em Rust.
// Ela permite que você teste várias condições alternativas quando a condição inicial do if for falsa.
// sintaxe:
// if (<condição1>) { <bloco de código a ser executado se a condição1 for verdadeira>}
// else if (<condição2>) { <bloco de código a ser executado se a condição2 for verdadeira>}
// else if (<condição3>) { <bloco de código a ser executado se a condição3 for verdadeira>}
// else {<bloco de código a ser executado se nenhuma das condições anteriores for verdadeira>}

#include <stdio.h>
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
