# include <stdio.h>
    linha(int num){ // A função recebe um inteiro que armazana em num.
        for(int i=1; i<=num;i++){
            printf("*");
        }
        printf("\n");
    }
int main(){
    /*
    Escreva um programa que, recorrendo a três funçoes distintas, escreva na tela a seguinte saida
    ***
    *****
    *******
    *****
    ***
    
    */

   linha(3);
   linha(5);
   linha(7);
   linha(5);
   linha(3);
  
 return 0;
}