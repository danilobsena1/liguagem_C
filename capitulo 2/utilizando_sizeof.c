#include <stdio.h>

int main(void) {

  // Para saber qual a dimensão de qualquer tipo devariavel utilize o operador denominado "sizeof()".
  
  //Escreva um programa que indique qual o número de bytes que ocupam todosos tipos básicos em C.
  printf("O tamanho em bytes de um inteiro: %d\n",sizeof(int));
  printf("O tamanho em bytes de um caractere: %d\n",sizeof(char));
  printf("O tamanho em bytes de um float: %d\n",sizeof(float));
  printf("O tamanho em bytes de um double: %d\n",sizeof(double));
  return 0;
}
