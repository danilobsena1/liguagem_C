# include <stdio.h>
    
    linha(int num, char caractere){ 
        for(int i=1; i<=num;i++){
            printf("%c",caractere);
        }
        printf("\n");
        
    }

int main(){
    /*
    Altere o programa de forma que a função linha escreva qualquer caractere,
    e não apenas o caractere asterisco
    
    */

   linha(20,'#');
   linha(20,'e');
   linha(20,'+');
  
 return 0;
}