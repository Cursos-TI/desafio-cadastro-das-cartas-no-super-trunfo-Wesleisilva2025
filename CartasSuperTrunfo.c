#include <stdio.h>

int main() {
    char Estado[20];
    char Codigo[10];
    char Nome[10];
    int Populacao;
    float Area;
    float PIB;
    int Numero;
    
    printf("Digite o Estado: \n");
    scanf("%s", Estado);  // Sin & porque Estado es un arreglo de caracteres

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo);  // Sin & porque Codigo es un arreglo de caracteres

    printf("Digite o Nome: \n");
    scanf("%s", Nome);    // Sin & porque Nome es un arreglo de caracteres

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o Numero: \n");
    scanf("%d", &Numero);

    // Mostrar los datos uno por línea, como sugieren los comentarios
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);  // %.2f para mostrar solo 2 decimales
    printf("PIB: %.2f\n", PIB);    // %.2f para mostrar solo 2 decimales
    printf("Numero: %d\n", Numero);

    return 0;
}


