// operadores: +,-,*,/ e % -- existe precedencia entre os operadores

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

// operadore de atribuiçao aritimética

// incremento em 1 unidade: ++
// decremento em uma unidade: --
// incremento generico: +=
// decremento genérico: -=
// atribuiçao com multiplicaçao: *=
// atribuiçao com divisao: /=
