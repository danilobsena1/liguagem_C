# include <stdio.h>
/*
Escreva um programa que declare um vetor float n[10] e coloque na i-esima posição o resultado de i*(n-i).

Qual o i-ésimo elemento de um vetor?  Diremos que o i-ésimo elemento de um vetor x é:
    x[i] ,

embora, a rigor, deveria ser x[i-1], uma vez que os elementos são numerados a partir de 0 na linguagem C.
De modo mais geral, ao listar coisas, diremos que

a  0-ésima  coisa é a primeira,
a  1-ésima  coisa é a segunda,
a  2-ésima  é a terceira,
e assim por diante.

Disponivel em: https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/footnotes/i-esimo.html
*/

const int n = 10;

int main(){
    
    float vetor[n];
    
    for(int i = 0; i<n; i++){
        vetor[i] = i*(n-1);
    }

    for(int j = 0; j<n; j++){
        printf("%.0f\n",vetor[j]);
    }

    return 0;
}