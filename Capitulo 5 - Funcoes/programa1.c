# include <stdio.h>

linha(){ // UTILIZANDO FUNÇÕES

    /*Escreva um programa que coloque uma linha de 20 asteriscos na tela:
    prog0502 */

    for (int i = 1; i <=20; i++){
        printf("*");
    
    }
    printf("\n");
}
  
int main(){
    linha(); //Escreve uma linha com asteriscos.
    puts("Números entre 1 e 5");
    linha(); //Escreve outra linha com asteriscos.
    for(int i = 1; i<=5; i++){
        printf("%d\n",i);
    }
    // printf("\n");
    linha(); //Escreve outra linha com asteriscos.
    return 0;
}