#include <stdio.h>

int main(){
    char nomes[5][50]; // Crie uma matriz de strings com no máximo 5 nomes de até 49 caracteres cada (50 inclui o caractere nulo).

    printf("Digite os nomes: \n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]); // Use %s para ler uma string.
    }

    printf("Nomes digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }
}