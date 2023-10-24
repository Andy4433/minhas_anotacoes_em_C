/*
Vetores [Arrays]:
    estruturas de dados unidimensionais
    indice unico controla as posições
    Sitaxe de declaração:
        <Tipo> <Nome> [<Tamanho>];
Acesso a uma posição:
    Não é possivel acessar um vetor todo
    Sitaxe:
        <nome>[<indice>]
lista de inicialização: preenche um vetor todo, de uma vez só
    <Tipo> <Nome> [<Tamanho>] = {<V1>,<V2>,...<Vn>}; 
*/
#include <stdio.h>

int main(){
    int v[5];

    float m;
    v[0]=50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;
    v[5] = 00;
    m = (v[0]+v[1]+v[2]+v[3]+v[4]+v[5])/5;
    printf("resultado: %.2f\n",m);
}