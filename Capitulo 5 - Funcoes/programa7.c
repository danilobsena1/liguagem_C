# include <stdio.h>

// Escreva uma função que calcule qual o maior de dois números

int maior(int num1, int num2){
    if(num1>num2)
        return("%d",num1);
    else
        return num2;  
}

int main(){
   int valor = maior(7, 22);
   printf("o número maior é: %d\n",valor);
}