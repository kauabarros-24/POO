#include <stdio.h>
#include <stdlib.h>

typedef struct construtor{
    int x;
    construtor() {
        x = 0;
        printf("Construiu um objeto\n");
    }
    

}construtor;

int main() {
    construtor objeto;
    printf("%d\n", objeto.x);
    objeto.x = 1;
    printf("%d\n", objeto.x);
    objeto = construtor();
    printf("%d\n", objeto.x);

}