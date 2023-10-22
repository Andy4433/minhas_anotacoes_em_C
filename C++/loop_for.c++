/*
Comando for:
    Similar ao while
        Inicialização, condição, atualização
Diferecial Crucial:
    Sintace mais complexa
        tudo fica embutido no camando
Sintaxe:
    for(inicialização(variavel), condição, atualização(i++)){
        <bloco_de_comandos>
    }
*/ 
#include <stdio.h>

int main(){
    int incremento;;
    int contador;
    int limite;

    printf("digite um numero: ");
    scanf("%d",&incremento);
    printf("digite um numero para a condição:");
    scanf("%d",&limite);


    for ( contador=0;  contador <= limite; contador+=incremento){
        
        if (contador%2==0){
            continue;
        }
        
        printf("%d\n",contador);

        if(contador>=10000){
            printf("é passou de 10000 \n");
            break; // Encerra o loop se i passar de 10,000.
        }
    }

/*
Comando breack:
    usado para encerrar o apenas o loop ou a estrutura de controle onde é executado.

Comando continue:
    Ele não encerra o programa, mas sim permite que o programa ignore o código restante na iteração atual e vá para a próxima iteração do loop.
*/

}
