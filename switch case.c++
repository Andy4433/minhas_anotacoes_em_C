// os comandos switch-case: é como fosse varios ifs em sequecia, é util para comparar
// uma unica variavel é igual a 1 entre varios valores.
// so da para comparar igualdade

// sintaxe:
// switch (<variavel>) {
//   case valor1:
//        <bloco de código a ser executado se a expressão for igual a valor1>
//        break;
//    case valor2:
//         <bloco de código a ser executado se a expressão for igual a valor2>
//        break;
//    case valor3:
//         <bloco de código a ser executado se a expressão for igual a valor3>
//        break;
//    default:
//         <bloco de código a ser executado se a expressão não corresponder a nenhum dos valores anteriores>
//        break;
// }

#include <stdio.h>

int main()
{
    int d;

    printf("insira o valor de 1 a 7: ");
    scanf("\n%d", &d);

    switch (d)
    {
        case 1:
            printf("domigo.\n"); break;
        case 2:
            printf("segunda.\n"); break;
        case 3:
            printf("terça.\n"); break;
        case 4:
            printf("quarta.\n"); break;
        case 5:
            printf("quinta.\n"); break;
        case 6:
            printf("sexta.\n"); break;
        case 7:
            printf("sabado.\n"); break;
        default:
            printf("numero invalido.\n"); break;
    }
}
