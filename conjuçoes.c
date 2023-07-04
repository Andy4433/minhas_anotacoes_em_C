//cojunçao ("e", logico): && --> é verdade quando tudo for verdade, (&& = and de python)
//disjunçao ("ou", logico): || --> é verdade se ao meos 1 for verdade, (|| = or de python)
//inversao ("negaçao", nao logico): !--> é verdade quando o operando é falso, (! = not de python)

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Insira a nota 1: ");
    scanf("%f",&nota1);

    printf("Insira a nota 2: ");
    scanf("%f",&nota2);

    printf("Insira a nota 3: ");
    scanf("%f",&nota3);

    media= (nota1+nota2+nota3)/3;

    if(media >= 7.0)
    {
        printf("Aprovado(a)! %.2f\n", media);
    }
    else if (media >=4.0 && media < 7.0)
    {
        printf("tem direito a exame! %.2f\n", media);

    }
    else{
        printf("reprovado(a) %.2f\n", media);
    }

}
