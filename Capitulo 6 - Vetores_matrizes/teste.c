# include <stdio.h>

int main(){
    int j = 5;
    int vetor[j];

    for(j = 0; j<5;j++){
        vetor[j]= j;
    }

    for(j = 0; j<5;j++){
        printf("%d, ",vetor[j]);
    }
    
}