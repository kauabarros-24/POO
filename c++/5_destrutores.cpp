#include <stdio.h>
#include <stdlib.h>

typedef struct dados {
    int *p;
    ~dados() {
        free(p);
        printf("Morreu\n");
    }
}dados;

int main() {
    dados obj;
    obj.p = (int*)malloc(sizeof(int)*9);
    printf("Vai acabar\n");

}
