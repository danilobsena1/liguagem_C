# include <stdio.h>

/*
Escreva um programa que permita gerar uma jogada para um tipo de sena, indicando os números a apostar,
os quais deverão ser criados aleatoriamente.
*/
int main(){

    int vetor [7][7];
    int numero;

    srand(time(NULL)); 

    for(int i = 0; i<7; i++){
        for(int j= 0; j<7;j++){
            vetor[i][j] = rand()%50; // Gera valores aleatorios.
        }
    }

   for(int i = 0; i<7; i++){
        for(int j= 0; j<7;j++){
            printf("%d ",vetor[i][j]);
        }
        printf("\n");
    }

    printf("Quantos números quer apostar( 0-Sair\n");
    printf("Número: ");
    scanf("%d",&numero);
    
    
    return 0;
}