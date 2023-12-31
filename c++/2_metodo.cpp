#include <stdio.h>

struct  aluno {
    char nome[50];
    void falar() {
        printf("%s\n", nome);
    }
};

int main() {
    aluno x = {"Kaua"}, y = {"auak"};
    x.falar();
    y.falar();
}
