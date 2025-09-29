#include <stdio.h>
static inline void Cima(){puts("Cima");}
static inline void Baixo(){puts("Baixo");}
static inline void Esquerda(){puts("Esquerda");}
static inline void Direita(){puts("Direita");}
int main(){
    for(int i=0;i<2;i++){
        Baixo();
        int h=0; while(h < (i==1)) { Esquerda(); h++; }
    }
    return 0;
}
