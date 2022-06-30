# include <stdio.h>

int main(){
    int vetor[10], j;

    for(j = 0; j<7;j++){
        vetor[j]= 0;
    }
    vetor[j] = 101;
    printf("%d\n",vetor[j]);
    
}