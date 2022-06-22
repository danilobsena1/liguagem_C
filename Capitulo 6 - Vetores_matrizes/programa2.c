# include <stdio.h>
int main(){
    // Inicie novamente todo o vetor, colocando em cada posição do mesmo o indice dessa mesma posição

    int vetorInterios[20];
    for(int i = 0; i<20;i++){
        vetorInterios[i] = i;
        printf("Vetor[%d]\n",vetorInterios[i]); 
    }
}