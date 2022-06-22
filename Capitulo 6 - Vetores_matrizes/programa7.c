// Inicializando o vetor com lixo nas posições a serem ocupadas:

# include <stdio.h>

int main(){
    int trash[10]; // Não inicializou o vetor com zero. O programa levará lixo para dentro do vetor.
    int i = 0;

    while(i<10){
        printf("Lixo na posição %d[%d]\n",i,trash[i]);
        i++;
    }
}