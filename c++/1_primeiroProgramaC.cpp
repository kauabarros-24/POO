#include <stdio.h>

struct pessoa {
        char nome[50];
        int idade;
};

int main() {
    
    pessoa x, y, z;
    printf("Digite o nome de x:");
    scanf("%s", x.nome);
    printf("Digite a idade da pessoa x:");
    scanf("%d", &x.idade);
    printf("Digite o nome de y:");
    scanf("%s", y.nome);
    printf("Digite a idade da pessoa y:");
    scanf("%d", &y.idade);
    printf("Digite o nome de z:");
    scanf("%s", z.nome);
    printf("Digite a idade da pessoa z:");
    scanf("%d", &z.idade);
    int maior = x.idade;
    char *nomeMaior = x.nome;
    if (maior < y.idade) {
        maior = y.idade;
        nomeMaior = y.nome;
    }
    if (maior < z.idade) {
        maior = z.idade;
        nomeMaior = z.nome;
    }
    printf("A pessoa mais velha é %s, tendo %d anos", nomeMaior, maior);
    if (x.idade == maior) {      
        printf("%s\n", x.nome);  
    }
    if (y.idade == maior) {      
        printf("%s\n", y.nome);  
    }
    if (z.idade == maior) {      
        printf("%s\n", z.nome);  
    }


}