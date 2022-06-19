#include <stdio.h>

int main(){
    /*
    Escreva um programa que solicite ao usuário a idade, o valor a depositar e o número da conta,
    declarando as variáveis como short, int, long
    */
    short int idade;  //ou short idade
    int valor;
    long int conta;  // ou long conta

    printf("Informe a idade: ");
    scanf("%hd",&idade);
    printf("Qual o valor a depositar: ");
    scanf("%d",&valor);
    printf("Número da conta: ");
    scanf("%ld",&conta);

    /*
    O formato de leitura e escrita de variáveis inteiras short e long nas funções scanf e printf
    deve ser precedido dos prefixos h(short) e l(long).

    */

    printf("Uma pessoa de %hd anos depositou $:%d na conta n°:%ld\n",idade,valor,conta);
    return 0;
}