// Escreva um programa que coloque o tabuleiro do jogo da velha:
# include <stdio.h>

int main(){
    
    char tabuleiro [3][3] ={{'x',' ','0'},{' ','x',' '}, {' ', ' ', '0'}};

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            printf("|%c",tabuleiro[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}