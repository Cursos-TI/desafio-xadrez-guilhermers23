#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
void moveTorre(int casas)
{
    if (casas > 0)
    {
        moveTorre(casas - 1);
        printf("Torre se movimentou para direita => %d \n", casas);
    }
};

void moveBispo(int casas)
{
    if (casas > 0)
    {
        moveBispo(casas - 1);
        printf("Bispo se movimentou para diagonal (cima e direita) => ^ %d \n", casas);
    }
};

void moveRainha(int casas)
{
    if (casas > 0)
    {
        moveRainha(casas - 1);
        printf("Rainha se movimentou para esquerda <= %d \n", casas);
    }
};

void moveCavalo(int casas)
{
    if (casas > 0)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Cavalo se movimentou para Cima ^ \n");
        }
        printf("Cavalo se movimentou para Direita <= \n");
        moveCavalo(casas - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimento_torre = 5;
    int movimento_bispo = 5;
    int movimento_rainha = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento da TORRE \n");
    moveTorre(movimento_torre);

    printf("Movimento do BISPO \n");
    moveBispo(movimento_bispo);

    printf("Movimento da RAINHA \n");
    moveRainha(movimento_rainha);

    printf("Movimento do CAVALO \n");
    moveCavalo(2);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
