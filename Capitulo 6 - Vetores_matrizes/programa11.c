char nome[24]; int x, t;

printf("Digite um nome: ");

gets(nome);

t = strlen(nome);

for(x = 0; x <= t-1; x++){

    printf("%c", nome[x]);

    printf("\n\n");
 }
