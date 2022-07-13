int main(){

     int lin,col, tab;

     int mat[4][4] = {{3,.6, 2, 7},{5, 0, 4, 1},{7, 9, 9, 8},{5, 3, 2, 4}};

     // Imprimindo a diagonal principal

     printf("\n\nDiagonal principal\n\n");

     for (lin=0; lin<=3;lin++){

        printf("%d\n",mat[lin][lin]);

        for (tab=1;tab<=lin+1;tab++)  

            printf("\t");
     }
