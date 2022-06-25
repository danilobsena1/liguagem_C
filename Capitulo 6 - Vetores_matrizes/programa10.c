# include <stdio.h>

funcao1(int vetor0[10]){
    for(int i=0; i<10; i++){
        vetor0[i] = i;
    }
    for(int i=0; i<10; i++){
        printf("%d",vetor0[i]);
    }
    printf("\n");
}   

int main(){

    int a[10]= {};

    funcao1(a); // Iniciar o vetor a usando a funçao funcao1

    return 0;
}