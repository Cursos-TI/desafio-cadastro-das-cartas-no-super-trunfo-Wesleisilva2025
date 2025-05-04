// Criando um array de 2 structs para armazenar as informações de duas cartas
struct Carta cartas[2];

// Loop para coletar os dados de 2 cartas
for (int i = 0; i < 2; i++) {
    printf("\n--- Cadastro da Carta %d ---\n", i + 1);
    
    // Leitura do Estado
    printf("Digite o Estado: \n");
    fgets(cartas[i].Estado, sizeof(cartas[i].Estado), stdin);
    cartas[i].Estado[strcspn(cartas[i].Estado, "\n")] = '\0'; // Remove o \n do final

    // Leitura do Código
    printf("Digite o Codigo: \n");
    fgets(cartas[i].Codigo, sizeof(cartas[i].Codigo), stdin);
    cartas[i].Codigo[strcspn(cartas[i].Codigo, "\n")] = '\0'; // Remove o \n do final

    // Leitura do Nome
    printf("Digite o Nome: \n");
    fgets(cartas[i].Nome, sizeof(cartas[i].Nome), stdin);
    cartas[i].Nome[strcspn(cartas[i].Nome, "\n")] = '\0'; // Remove o \n do final

    // Leitura da População com validação
    printf("Digite a Populacao: \n");
    while (scanf("%d", &cartas[i].Populacao) != 1 || cartas[i].Populacao < 0) {
        printf("Entrada invalida! Digite um numero inteiro nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura da Área com validação
    printf("Digite a Area: \n");
    while (scanf("%f", &cartas[i].Area) != 1 || cartas[i].Area < 0) {
        printf("Entrada invalida! Digite um numero real nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura do PIB com validação
    printf("Digite o PIB: \n");
    while (scanf("%f", &cartas[i].PIB) != 1 || cartas[i].PIB < 0) {
        printf("Entrada invalida! Digite um numero real nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura do Número com validação
    printf("Digite o Numero: \n");
    while (scanf("%d", &cartas[i].Numero) != 1 || cartas[i].Numero < 0) {
        printf("Entrada invalida! Digite um numero inteiro nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();
}

// Exibindo os dados das 2 cartas
printf("\n--- Dados das Cartas Cadastradas ---\n");
for (int i = 0; i < 2; i++) {
    printf("\nCarta %d:\n", i + 1);
    printf("Estado: %s\n", cartas[i].Estado);
    printf("Codigo: %s\n", cartas[i].Codigo);
    printf("Nome: %s\n", cartas[i].Nome);
    printf("Populacao: %d\n", cartas[i].Populacao);
    printf("Area: %.2f\n", cartas[i].Area);
    printf("PIB: %.2f\n", cartas[i].PIB);
    printf("Numero: %d\n", cartas[i].Numero);
}

return 0;

}


