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
    char codigo_cliente[3], nome_fita[20];
    int valor_total = 15, qtde_dias = 3;

    printf("Informe o código do cliente: \n");
    scanf("%s", &codigo_cliente);
    printf("Informe o nome da fita: \n");
    scanf("%s", &nome_fita);

    printf("O valor total da locação é %d e o quantidade de dias são %d dias\n", valor_total, qtde_dias);
    return 0;
}