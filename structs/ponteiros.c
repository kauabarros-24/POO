#include <stdio.h>

typedef struct  par {
    int x, y;

}par;

int main() {
    par P;
    par *ponteiro = &P;
    ponteiro->x = 1;
    ponteiro->y = 2;
    printf("%d\n%d\n", P.x, P.y);
}