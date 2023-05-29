/*
2 – Considere a seguinte situação hipotética:
A dona Maria mãe do Pedrinho trabalha como vendedora de espetinhos, e, atualmente
está em um ponto fixo ao lado da única lotérica da cidade. A dona Maria vende uma
média de 350 espetinhos por dia, a R$ 5,50, e o custo de cada espetinho é de R$
2,50. Contudo, para cada espetinho vendido, R$ 0,50 fica para a dona da lotérica.
Mediante a situação da dona Maria, implemente um algoritmo que faça as leituras de
quantos espetinhos foram vendidos, e apresente na tela o valor de venda do dia, e,
quanto que a dona Maria deve repassar para a dona da lotérica. O valor de custo e
de venda de cada espetinho devem estar fixos no código. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");

    int qtde_espetinhos;
    float valor_venda = 5.50;
    float valor_custo = 2.50;
    float total_vendas;
    float lucro;
    float valor_loterica;

    printf("Digite a quantidade de espetinhos vendidos no dia: ");
    scanf("%d", &qtde_espetinhos);

    total_vendas = qtde_espetinhos * valor_venda;
    valor_loterica = qtde_espetinhos * 0.5;
    lucro = total_vendas - valor_loterica - (qtde_espetinhos * valor_custo);

    printf("Dona Maria deve a lotérica o valor de R$%f reais.\n", valor_loterica);
    printf("Dona Maria vendeu o total de R$%f reais e teve como lucro R$%f reais.", total_vendas, lucro);
    return 0;
}