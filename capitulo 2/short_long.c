#include <stdio.h>
int main(){
    /* 
    Para garantirmosque o inteiro n use apenas 2 bytes de memória, devemos declarar a variavel como:
    short int variavel; ou short variavel; 
    
    Para garantirmos que o inteiro n use apenas 4 bytes de memória, devemos declarar a variavel como:
    long int variavel; ou long variavel;
    
    O prefixo short garante o tamanho mínimo do inteiro, e o prefixo long garante o tamanho máximo,independente
    da dimensão do inteiro utilizado. 
    */
    short int variavel0;
    long int variavel1;

    printf("O tamanho em bytes de um inteiro utilizando short: %d\n",sizeof(variavel0));
    printf("O tamanho em bytes de um inteiro utilizando long: %d\n",sizeof(variavel1));
    return 0;
}