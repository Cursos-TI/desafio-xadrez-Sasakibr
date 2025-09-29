#include <stdio.h>


enum { PASSOS_BISPO = 5, PASSOS_TORRE = 5, PASSOS_RAINHA = 8 };

static inline void Cima(void){ printf("Cima\n"); }
static inline void Baixo(void){ printf("Baixo\n"); }
static inline void Esquerda(void){ printf("Esquerda\n"); }
static inline void Direita(void){ printf("Direita\n"); }

static void mover_bispo(int passos){
    int i = 0;
    if (passos <= 0) return;
    do { Cima(); Direita(); i++; } while (i < passos);
}

// Torre: direita (for)
static void mover_torre(int passos){
    for (int i = 0; i < passos; i++) Direita();
}

// Rainha: esquerda (while)
static void mover_rainha(int passos){
    int i = 0;
    while (i < passos){ Esquerda(); i++; }
}

int main(void){
    puts("Bispo (5 casas, diag ↑→):");
    mover_bispo(PASSOS_BISPO);

    puts("\nTorre (5 casas, →):");
    mover_torre(PASSOS_TORRE);

    puts("\nRainha (8 casas, ←):");
    mover_rainha(PASSOS_RAINHA);

    return 0;
}