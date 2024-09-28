#include <stdio.h>

void imprimir_tabela_ascii_extendida(int INICIO, int FIM) {
    printf("Tabela ASCII (%d a %d)\n", INICIO, FIM);
    printf("Código | Caractere\n");
    printf("---------------------\n");

    for (int i = INICIO; i < FIM; i++) {
        printf("%3d    | ", i);
        if (i < 32 || i == 127) { // Caracteres de controle 
            printf(" "); // Ficou vazio porque não e nescessario no momento
        } else {
            printf("%c", i); // Imprime o caractere correspondente ao numero hexadecimal
        }
        printf("\n");
    }
}

// função para imprimir a tabela ASCII completa

int main() {
    // Parte padrão da tabela ASCII
    imprimir_tabela_ascii_extendida(0, 128);
    
    printf("\n");
    
    // Parte estendida da tabela ASCII 
    imprimir_tabela_ascii_extendida(128, 256);

    return 0;
}
