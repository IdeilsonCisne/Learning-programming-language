/*
3 - Considere que precisamos desenvolver um algoritmo que classifique uma
determinada pessoa entre maior de idade ou menor de idade. Para esse problema
sabemos que precisamos avaliar a idade da pessoa, e que se essa idade for maior
(ou igual) que 18 anos a pessoa é considerada maior de idade, caso contrário será
menor de idade. Neste exercício solicite a idade da pessoa e apresente na tela se
ela é: maior ou menor de idade. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade!\n");
    } else {
        printf("Você é menor de idade!\n");
    }

    return 0;
}