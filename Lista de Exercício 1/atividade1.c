/*
Complete o programa

Um desenvolvedor inicou o desenvolvimento na linguagem C, que tem por objetivo criar uma enquete de satisfação do 
cliente com relação ao atendimento de uma loja de roupas da cidade.
O desenvolvedor chegou a criar a estrutura em C do programa, bem como uma 
estrutura de repetição que imprime e solicita uma nota referente ao atendimento. 
Entretanto, ele teve dificuldades em criar a parte em que os votos são computados e 
somados para cada uma das variáveis. Por conta disso, analise o código a seguir.
Agora, desenvolva a solução, utilizando a estrutura condicional SWITCH na linguagem C, 
adicionando na linha 21 que tornaria o programa da linguagem C completo para sua execução.
*Atenção: a solução deve ser escrita na linguagem C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo, opcao;

    qtdRuim = 0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo = 0;

    do
    {
        printf("O que você achou do atendimento? Digite uma opção.\n");
        printf("0 - RUIM.\n");
        printf("1 - REGULAR.\n");
        printf("2 - BOM.\n");
        printf("3 - OTIMO.\n");
        printf("5 - SAIR.\n");
        scanf("%i", &opcao);

        switch (opcao) {
            case 0:
                qtdRuim = qtdRuim + 1;
                break;
            case 1:
                qtdRegular = qtdRegular + 1;
                break;
            case 2: 
                qtdBom = qtdBom + 1;
                break;
            case 3:
                qtdOtimo = qtdOtimo + 1;
                break;
            default:
                break;
        }

    } while (opcao != 5);

    printf("Quantidade de Votos no Ruim: %i\n", qtdRuim);
    printf("Quantidade de Votos no Regular: %i\n", qtdRegular);
    printf("Quantidade de Votos no Bom: %i\n", qtdBom);
    printf("Quantidade de Votos no Ótimo: %i\n", qtdOtimo);

    return 0;
}