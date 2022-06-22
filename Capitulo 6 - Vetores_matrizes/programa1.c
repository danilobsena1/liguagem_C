# include <stdio.h>

int main(){
    /* Um vetor pode conter elementos de qualquer tipo de dados.Porém os elementos do vetor são todos do mesmo tipo.
    A declaração de um vetor com uma única dimensão obedece à seguinte sintaxe.

    tipo nome_vetor[n° elementos];
    */

    //Declarando um vetor com 20 inteiros:

    int vetorInteiros[20];

    //Colocando o valor 100 na primeira posição do vetor.
    vetorInteiros[0] = 100;
    printf("%d\n",vetorInteiros[0]);

    //Coloque na ultima posição do vetor o dobro do valor do primeiro elemento:
    vetorInteiros[19] = vetorInteiros[0] * 2;

    printf("%d\n",vetorInteiros[19]);

    //Coloque no terceiro elemento do vetor a soma do primeiro com o ultimo elemento:
    vetorInteiros[2] = vetorInteiros[0]+vetorInteiros[19];
    printf("%d\n",vetorInteiros[2]);
}