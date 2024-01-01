#include <stdio.h>
#include <stdlib.h>

typedef struct construtor {
    int x;
    construtor () {
        x = 0;
    }
    construtor(int valor) {
        x = valor;
    }
}construtor;

int main() {
    construtor objeto(1);
    printf("%d\n", objeto.x);
    objeto = construtor();
    printf("%d\n", objeto.x);

}