#include <stdio.h>

int main(){


    //Tabuleiro
    char letras [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1, 2, 3 ,4 ,5 ,6, 7 ,8 ,9, 10};
    int tabuleiro [10][10] = {0}; //Inicializando todas as posições do tabuleiro com o valor 0

    //Posicionar navios
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    //Posição inicial do navio horizontal (linha 1 = B, colina 1 = 2)
    int linha_h = 1;
    int coluna_h = 1;

    //Posicionando o navio horizonal na matriz
    for (int i = 0; i < 3; i++){
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    //Posição inicial do navio vertial (linha 4 = E, coluna 5 = 6)
    int linha_v = 4;
    int coluna_v = 5;

    //Posicionando o navio vertical na mtriz
    for (int i = 0; i < 3; i++){
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    //Exibir o tabuleiro
    printf("   ");  //Espaço para alinhar com as letras da linha
    for (int c = 1; c <= 10; c++){
        printf("%2d ", c);  //Exibe as colunas de 1 a 10
    }
    printf("\n");

    //Linha separadora
    printf("  +");
    for (int c = 0; c < 10; c++){
        printf("---");
    }
    printf("+\n");


    //Impressão da matriz com letras nas linhas
    for (int i = 0; i < 10; i++){
        printf("%c |", letras[i]);  //Letra de cada linha
        for (int j = 0; j < 10; j++){
            printf(" %d ", tabuleiro[i][j]);    //Conteudo da célula (0 = água)
        }
        printf("|\n");
    }

    //Linha final
    printf("  +");
    for (int c = 0; c < 10; c++){
        printf("---");
    }
    printf("+\n");



    return 0;
}