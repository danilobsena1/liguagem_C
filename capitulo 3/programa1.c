#include <stdio.h>
int main(){
/*
Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, aplique todos os operadores relacionais de C aos inteiros lidos.    
*/

    int num1,num2;
    printf("Digite dois números inteiros: ");
    scanf("%d%d",&num1,&num2);

    printf(" 0 = falso | 1 = verdadeiro\n");

    printf("%d == %d: %d\n",num1,num2,num1==num2);
    printf("%d > %d: %d\n",num1,num2,num1>num2);
    printf("%d >= %d: %d\n",num1,num2,num1>=num2);
    printf("%d < %d: %d\n",num1,num2,num1<num2);
    printf("%d <= %d: %d\n",num1,num2,num1<=num2);
    printf("%d != %d: %d\n",num1,num2,num1!=num2);

    return 0;
}