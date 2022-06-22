# include <stdio.h>
/*
    Trabalhando com funções e vetores 
    iniciando os vetores com o valor 7 em todas as posições.
    */
int inserir(int vetorOnze[11]){
        for(int i=0;i<11;i++){
            vetorOnze[i] = 7;
        }
    }

int main(){
    int vetor[11];

    inserir(vetor);
    printf("\n");
    for(int j=0; j<11;j++){
        printf("vetor[%d] = %d\n",j,vetor[j]);
    }

    return 0;
}