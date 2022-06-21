# include <stdio.h>
    linha3(){
        for(int i=1; i<=3;i++){
            printf("*");
        }
        printf("\n");
    }

    linha5(){
        for(int i=1; i<=5;i++){
            printf("*");
        }
        printf("\n");
    }

    linha7(){
        for(int i=1; i<=7;i++){
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

   linha3();
   linha5();
   linha7();
   linha5();
   linha3();
  
 return 0;
}