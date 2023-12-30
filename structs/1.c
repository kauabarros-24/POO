# include <stdio.h>

struct aluno {
    char nome[100];
    int idade;
};


int main() {
    struct aluno dados;
    scanf("%s%d", dados.nome, &dados.idade); 
    printf("Nome %s\n", dados.nome);
    printf("Idade %d\n", dados.idade);
    
}