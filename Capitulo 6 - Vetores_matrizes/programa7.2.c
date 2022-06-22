// Inicializando o vetor sem lixo nas posições a serem ocupadas:

# include <stdio.h>

int main(){
    int trash[10]= {}; // abriu e fechou chave. Inicializou o vetor com zero..
    int i = 0;

    while(i<10){
        printf("Lixo na posição %d[%d]\n",i,trash[i]); // valores armazenados igual a 0
        // printf("Lixo na posição %d[%d]\n",i,trash[i]=i); valores armazenados vã ode 0 a 9
        i++;
    }
}