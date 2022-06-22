# include <stdio.h>
// Desenvolver um programa que leia uma matriz de 3 x 3 elementos usando um comando for, multiplique cada elemento por cinco e imprima o resultado
int main(){
    
    int tabela [3][3];
    int i, j;

    for(i = 0; i<3; i++){ //controle de linha.
        for(j = 0; j<3; j++){ //controle de coluna.
            printf("Digite o elemento da linha %d, coluna %d da matriz: ",i+1,j+1);
            scanf("%d",&tabela[i][j]);   
        } 
        printf("\n");
    }
    
    for(i = 0; i<3; i++){ // Exibindo o valores armazenado na matriz.
        printf("Valores digitados na  %d° linha: ",i+1);
        for(j = 0; j<3; j++){
                printf("%d ",tabela[i][j]);
        }
        printf("\n");
    } 

    return 0;
}