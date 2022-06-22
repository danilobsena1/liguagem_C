# include <stdio.h>

int main(){
    /*
    Escreva um programa que realize a leitura dos salarios pagos a um individuo durante um ano.
    Em seguida, o programa deverá mostrar os valores mensais e o total anual;
    */

    float salarios[12], valorTotal;

    for(int i=0;i<12;i++){
        printf("Informe o salario do %d mês: ",i+1);
        scanf("%f",&salarios[i]);
    }
    printf("\n");
    for(int j=0; j<12;j++){
        printf("Valor do %d mês: %.2f\n",j+1,salarios[j]);
        valorTotal +=salarios[j];
    }
    printf("\n");
    printf("Valor total anual: %.2f\n",valorTotal);

}