// um erro comum de uma variavel onde o conteudo nao é conhecido pelo
// programador o esqueceu de colocar a instruçao isso é um erro sermantico

// comando while
// inicializaçao de uma ou mais ariaveis de controle
// definiçao de uma condiçao de parada
// enquanto for verdadeira: repete
// Atualizaçao das variaveis de controle
// CUIDADO: loop infinito

// while (<condição>){
//  <bloco_de_comandos>
//  }

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
