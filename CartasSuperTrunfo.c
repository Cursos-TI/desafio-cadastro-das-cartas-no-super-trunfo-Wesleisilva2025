#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    char Estado[20];
    char Codigo[10];
    char Nome[10];
    int Populacao;
    float Area;
    float PIB;
    int Numero;

    // Configura a codificação para suportar acentos (opcional, dependendo do sistema)
    setlocale(LC_ALL, "Portuguese");

    // Função para limpar o buffer de entrada
    void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Leitura do Estado
    printf("Digite o Estado: \n");
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = '\0'; // Remove o \n do final

    // Leitura do Código
    printf("Digite o Codigo: \n");
    fgets(Codigo, sizeof(Codigo), stdin);
    Codigo[strcspn(Codigo, "\n")] = '\0'; // Remove o \n do final

    // Leitura do Nome
    printf("Digite o Nome: \n");
    fgets(Nome, sizeof(Nome), stdin);
    Nome[strcspn(Nome, "\n")] = '\0'; // Remove o \n do final

    // Leitura da População com validação
    printf("Digite a Populacao: \n");
    while (scanf("%d", &Populacao) != 1 || Populacao < 0) {
        printf("Entrada invalida! Digite um numero inteiro nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura da Área com validação
    printf("Digite a Area: \n");
    while (scanf("%f", &Area) != 1 || Area < 0) {
        printf("Entrada invalida! Digite um numero real nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura do PIB com validação
    printf("Digite o PIB: \n");
    while (scanf("%f", &PIB) != 1 || PIB < 0) {
        printf("Entrada invalida! Digite um numero real nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Leitura do Número com validação
    printf("Digite o Numero: \n");
    while (scanf("%d", &Numero) != 1 || Numero < 0) {
        printf("Entrada invalida! Digite um numero inteiro nao negativo: \n");
        limparBuffer();
    }
    limparBuffer();

    // Exibição dos dados
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero: %d\n", Numero);

    return 0;
}


