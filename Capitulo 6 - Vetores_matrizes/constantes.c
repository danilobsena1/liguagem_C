# include <stdio.h>
/*
A definição de cosntantes pode ser realizada de duas maneiras distintas:

- Através da palava reservada const;
    const tipo variavel = valor;

- Através da diretiva de pré- processamento #define
    #define variavel valor
*/

const int valor = 5;

funcao3(int k[]){
    for(int i = 0; i<valor; i++){
        k[i] = 0;
    }
}

int main(){
    int v[valor],i;

    funcao3(v);

    for(int i = 0; i<valor; i++){
        v[i] = 0;
    } 
    // programa incompleto

    return 0;
}