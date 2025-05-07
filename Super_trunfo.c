#include <stdio.h>

// estrutura da carta

typedef struct
{
char Estado; // letra de 'A' a 'H'
char CodigoCarta[4]; // Exemplo: "A01"
char NomeCidade[20];
int Populacao;
float Areakm;
float PIB;
int NumPontosTuristicos;
} supertrunfo;

// leitura dos dados da carta

void lercarta(supertrunfo *carta, int numero) {
    printf("\n--- Inserindo dados da carta %d ---\n", numero);

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta->Estado);

    printf("Código da carta (exemplo: A01): ");
    scanf("%3s", carta->CodigoCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->NomeCidade);

    printf("População: ");
    scanf("%d", &carta->Populacao);

    printf("Área em km²: ");
    scanf("%f", &carta->Areakm);

    printf ("PIB: ");
    scanf("%f", &carta->PIB);

    printf("Número de pontos Turísticos: ");
    scanf("%d", &carta->NumPontosTuristicos);
}

// exibição dos dados da carta

void exibircarta (supertrunfo carta, int numero) {
    printf("\n--- Dados da Carta %d ---\n", numero);
    printf("Estado: %c\n", carta.Estado);
    printf("Código da carta: %s\n", carta.CodigoCarta);
    printf("Nome da cidade: %s\n", carta.NomeCidade);
    printf("População: %d\n", carta.Populacao);
    printf("Área em km²: %.2f\n", carta.Areakm);
    printf("PIB: %.2f\n", carta.PIB);
    printf("Número de pontos Turísticos: %d\n", carta.NumPontosTuristicos);
}

int main () {
supertrunfo carta1, carta2;

// Leitura das duas cartas

lercarta(&carta1, 1);
lercarta(&carta2, 2);

// Exibição das cartas

exibircarta(carta1, 1);
exibircarta(carta2, 2);

return 0;

}





