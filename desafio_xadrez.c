#include <stdio.h>

// Desafio: Nível Mestre
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
    // Desafio: nível novato
    int movimento_torre = 5;
    int movimento_bispo = 5;
    int movimento_rainha = 8;

    printf("Movimento da TORRE \n");
    moveTorre(movimento_torre);

    printf("Movimento do BISPO \n");
    moveBispo(movimento_bispo);

    printf("Movimento da RAINHA \n");
    moveRainha(movimento_rainha);

    // Desafio: Nível Aventureiro
    printf("Movimento do CAVALO \n");
    moveCavalo(2);

    return 0;
}