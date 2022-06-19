# include <stdio.h>
int main()
{
    // Implemente um programa que identifique se o inteiro lido é zero ou não
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero == 0){
        printf("O número digitado é zero\n");
    }else{
        printf("O número digitado foi: %d\n",numero);
    }
    return 0;
}
