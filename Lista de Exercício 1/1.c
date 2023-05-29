/* 
1 - Um antigo sistema de locadora de filmes, sempre que alugávamos um filme, era
necessário entrar com algumas informações como, por exemplo: o nosso código de
cliente e o nome da fita que estamos locando. Ao término o atendente informava o
valor total da locação e a quantidade de dias que ele poderia ficar com o filme. Neste
exercício vamos praticar a entrada e a saída de dados, não é necessário realizar
cálculos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    char codigo_cliente[3];
    int nome_fita, valor_total, qtde_dias = 3;

    printf("Informe o código do cliente: \n");
    scanf("%s", &codigo_cliente);
    printf("Informe o nome da fita: \n"
            "1 - SuperMan.\n"
            "2 - Batman Begins.\n"
            "3 - Aquaman.\n");
    scanf("%d", &nome_fita);

    switch (nome_fita) {
        case 1: {
            printf("Fita escolha foi o SuperMan.");
            valor_total = 10;
            break;
        }
        case 2: {
            printf("Fita escolha foi o Batman.");
            valor_total = 15;
            break;
        }
        case 3: {
            printf("Fita escolha foi o Aquaman.");
            valor_total = 20;
            break;
        }
        default: {
            printf("Fita inválida!");
        }
    }

    printf("O valor total da locação é R$%d,00 reais e %d dias para devolução do filme.\n", valor_total, qtde_dias);
    return 0;
}