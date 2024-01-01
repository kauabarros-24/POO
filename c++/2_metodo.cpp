#include <stdio.h>
#include <stdlib.h>

typedef struct Personagem {
    char nome[50];
    int ataque;
    int defesa;
    int vida;
    bool sobreviveu(int danoRecebido) {
    
    }    

}Personagem;

int main(){
    Personagem personagem;

    int dano;

    scanf("%s", &personagem.nome);
    scanf("%d", &personagem.ataque);
    scanf("%d", &personagem.defesa);
    scanf("%d", &personagem.vida);

    scanf("%d", &dano);

    if(personagem.sobreviveu(dano)){
        printf("%s sobreviveu!!!", personagem.nome);
    }else{
        printf("%s morreu :(", personagem.nome);
    }
}

