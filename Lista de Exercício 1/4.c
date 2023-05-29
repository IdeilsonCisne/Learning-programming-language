/*
4 - Considere a situação de um determinado aluno em uma disciplina. Sabe-se que
para ser aprovado, é necessário que nota >= 7.0 e que frequência > 75, ao mesmo
tempo. Neste exercício solicite a nota e a frequência do aluno, e apresente na
tela se ele foi aprovado ou reprovado. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int nota, frequencia;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    printf("Digite a frequencia do aluno: ");
    scanf("%d", &frequencia);

    if (nota >= 7 && nota <= 10 && frequencia >= 75 && frequencia <= 100) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno de recuperação!");
    }
}