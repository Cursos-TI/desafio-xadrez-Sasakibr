#include <stdio.h>

static inline void Cima(){ puts("Cima"); }
static inline void Baixo(){ puts("Baixo"); }
static inline void Esquerda(){ puts("Esquerda"); }
static inline void Direita(){ puts("Direita"); }

void torre_rec(int n){ if(n<=0) return; Direita(); torre_rec(n-1); }
void rainha_rec(int n){ if(n<=0) return; Esquerda(); rainha_rec(n-1); }

// bispo com recursão + loops aninhados (cada passo = Cima + Direita)
void bispo_rec(int n){
    if(n<=0) return;
    for(int b=0;b<1;b++) for(int k=0;k<2;k++) k?Direita():Cima();
    bispo_rec(n-1);
}

// cavalo: 1 L para CIMA e DIREITA (múltiplas variáveis, continue/break)
void cavalo_L_up_right(void){
    int up=2, right=1;
    for(int step=0; (up>0)||(right>0); step++){
        if(up>0){ Cima(); up--; continue; }
        if(right>0){ Direita(); right--; }
        if(!up && !right) break;
    }
}

int main(void){
    puts("Bispo (5x diag ↑→):"); bispo_rec(5);
    puts("\nTorre (5x →):");      torre_rec(5);
    puts("\nRainha (8x ←):");     rainha_rec(8);
    puts("\nCavalo (↑↑→):");      cavalo_L_up_right();
    return 0;
}