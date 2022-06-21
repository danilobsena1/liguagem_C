# include <stdio.h>
int soma(int num1, int num2){
   return num1+num2;
}

int dobro(int dobro){
    return 2*dobro;
}

int main(){
    /*
    Escreva um programa que solicite dois números ao usuario e apresente na tela o resultado
    da sua soma e o dobro de cada um deles.
    */
   int numero1,numero2,total;
   printf("Digite dois números: ");
   scanf("%d%d",&numero1,&numero2);
   total = soma(numero1,numero2); //Atribui o result de uma função a uma variável
   printf("A soma de: %d+%d = %d\n",numero1,numero2,total);
   printf("2 * %d = %d | 2 * %d = %d\n",numero1,dobro(numero1), numero2,dobro(numero2));

   return 0;
}