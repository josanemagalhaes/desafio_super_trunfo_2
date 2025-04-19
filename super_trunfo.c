#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da estrutura da carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float densidade;
    int pib;
} Carta;

// Função para exibir o menu de atributos
void exibirMenuAtributos(int atributoIgnorado) {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade Demográfica\n");
    printf("4 - PIB\n");

    // Se um atributo foi escolhido, não o mostre novamente
    if (atributoIgnorado != 0) {
        printf("Opção %d já foi escolhida.\n", atributoIgnorado);
    }
    printf("Digite o número do atributo: ");
}

int main() {
    // Cartas pré-cadastradas (simplificação)
    Carta carta1 = {"Brasil", 214000000, 8516000, 25.13, 1440000};
    Carta carta2 = {"Argentina", 45000000, 2780000, 16.19, 490000};

    int escolha1, escolha2;
    int atributoIgnorado = 0; // Inicialmente nenhum atributo ignorado

    // Escolha do primeiro atributo
    do {
        exibirMenuAtributos(atributoIgnorado);
        scanf("%d", &escolha1);

        if (escolha1 < 1 || escolha1 > 4) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha1 < 1 || escolha1 > 4);

    atributoIgnorado = escolha1; // O primeiro atributo escolhido será ignorado na próxima seleção

    // Escolha do segundo atributo
    do {
        exibirMenuAtributos(atributoIgnorado);
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 4 || escolha2 == escolha1) {
            printf("Opção inválida ou atributo já escolhido. Tente novamente.\n");
        }
    } while (escolha2 < 1 || escolha2 > 4 || escolha2 == escolha1);

    printf("\n--- Comparando as Cartas ---\n");
    printf("País 1: %s\n", carta1.nome);
    printf("País 2: %s\n", carta2.nome);

    int valor1_atributo1, valor2_atributo1;
    int valor1_atributo2, valor2_atributo2;

    char nome_atributo1[20];
    char nome_atributo2[20];

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1:
            strcpy(nome_atributo1, "População");
            valor1_atributo1 = carta1.populacao;
            valor2_atributo1 = carta2.populacao;
            printf("\n%s:\n", nome_atributo1);
            printf("%s: %d\n", carta1.nome, valor1_atributo1);
            printf("%s: %d\n", carta2.nome, valor2_atributo1);
            if (valor1_atributo1 > valor2_atributo1) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo1);
            } else if (valor2_atributo1 > valor1_atributo1) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo1);
            } else {
                printf("Empate em %s!\n", nome_atributo1);
            }
            break;
        case 2:
            strcpy(nome_atributo1, "Área");
            valor1_atributo1 = carta1.area;
            valor2_atributo1 = carta2.area;
            printf("\n%s:\n", nome_atributo1);
            printf("%s: %.2f\n", carta1.nome, valor1_atributo1);
            printf("%s: %.2f\n", carta2.nome, valor2_atributo1);
            if (valor1_atributo1 > valor2_atributo1) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo1);
            } else if (valor2_atributo1 > valor1_atributo1) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo1);
            } else {
                printf("Empate em %s!\n", nome_atributo1);
            }
            break;
        case 3:
            strcpy(nome_atributo1, "Densidade Demográfica");
            valor1_atributo1 = carta1.densidade;
            valor2_atributo1 = carta2.densidade;
            printf("\n%s:\n", nome_atributo1);
            printf("%s: %.2f\n", carta1.nome, valor1_atributo1);
            printf("%s: %.2f\n", carta2.nome, valor2_atributo1);
            if (valor1_atributo1 < valor2_atributo1) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo1);
            } else if (valor2_atributo1 < valor1_atributo1) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo1);
            } else {
                printf("Empate em %s!\n", nome_atributo1);
            }
            break;
        case 4:
            strcpy(nome_atributo1, "PIB");
            valor1_atributo1 = carta1.pib;
            valor2_atributo1 = carta2.pib;
            printf("\n%s:\n", nome_atributo1);
            printf("%s: %d\n", carta1.nome, valor1_atributo1);
            printf("%s: %d\n", carta2.nome, valor2_atributo1);
            if (valor1_atributo1 > valor2_atributo1) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo1);
            } else if (valor2_atributo1 > valor1_atributo1) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo1);
            } else {
                printf("Empate em %s!\n", nome_atributo1);
            }
            break;
        default:
            printf("Erro interno no primeiro atributo.\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1:
            strcpy(nome_atributo2, "População");
            valor1_atributo2 = carta1.populacao;
            valor2_atributo2 = carta2.populacao;
            printf("\n%s:\n", nome_atributo2);
            printf("%s: %d\n", carta1.nome, valor1_atributo2);
            printf("%s: %d\n", carta2.nome, valor2_atributo2);
            if (valor1_atributo2 > valor2_atributo2) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo2);
            } else if (valor2_atributo2 > valor1_atributo2) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo2);
            } else {
                printf("Empate em %s!\n", nome_atributo2);
            }
            break;
        case 2:
            strcpy(nome_atributo2, "Área");
            valor1_atributo2 = carta1.area;
            valor2_atributo2 = carta2.area;
            printf("\n%s:\n", nome_atributo2);
            printf("%s: %.2f\n", carta1.nome, valor1_atributo2);
            printf("%s: %.2f\n", carta2.nome, valor2_atributo2);
            if (valor1_atributo2 > valor2_atributo2) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo2);
            } else if (valor2_atributo2 > valor1_atributo2) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo2);
            } else {
                printf("Empate em %s!\n", nome_atributo2);
            }
            break;
        case 3:
            strcpy(nome_atributo2, "Densidade Demográfica");
            valor1_atributo2 = carta1.densidade;
            valor2_atributo2 = carta2.densidade;
            printf("\n%s:\n", nome_atributo2);
            printf("%s: %.2f\n", carta1.nome, valor1_atributo2);
            printf("%s: %.2f\n", carta2.nome, valor2_atributo2);
            if (valor1_atributo2 < valor2_atributo2) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo2);
            } else if (valor2_atributo2 < valor1_atributo2) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo2);
            } else {
                printf("Empate em %s!\n", nome_atributo2);
            }
            break;
        case 4:
            strcpy(nome_atributo2, "PIB");
            valor1_atributo2 = carta1.pib;
            valor2_atributo2 = carta2.pib;
            printf("\n%s:\n", nome_atributo2);
            printf("%s: %d\n", carta1.nome, valor1_atributo2);
            printf("%s: %d\n", carta2.nome, valor2_atributo2);
            if (valor1_atributo2 > valor2_atributo2) {
                printf("%s vence em %s!\n", carta1.nome, nome_atributo2);
            } else if (valor2_atributo2 > valor1_atributo2) {
                printf("%s vence em %s!\n", carta2.nome, nome_atributo2);
            } else {
                printf("Empate em %s!\n", nome_atributo2);
            }
            break;
        default:
            printf("Erro interno no segundo atributo.\n");
            return 1;
    }

    // Soma dos atributos
    int soma1 = valor1_atributo1 + valor1_atributo2;
    int soma2 = valor2_atributo1 + valor2_atributo2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos atributos de %s: %d\n", carta1.nome, soma1);
    printf("Soma dos atributos de %s: %d\n", carta2.nome, soma2);

    // Determinação do vencedor com base na soma
    if (soma1 > soma2) {
        printf("%s é o vencedor da rodada!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("%s é o vencedor da rodada!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
