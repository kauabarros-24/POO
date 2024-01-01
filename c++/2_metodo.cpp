#include <stdio.h>
#include <stdlib.h>

typedef struct personagem {
    char nome[40];
    int vida, defesa;
    bool sobreviveu(int danoTomado) {
        int danoReal = danoTomado - defesa;
        if (danoReal < 0) 
            danoReal = 0;
        return (vida - danoReal) > 0;
    }
   
}personagem;


int main() {
    personagem Personagem;
    int dano;
    scanf("%d %d %s %d", &Personagem.vida, &Personagem.defesa, Personagem.nome, &dano);
    if (Personagem.sobreviveu(dano)) 
        printf("Sobreviveu");
    else 
        printf("Morreu");
}
 