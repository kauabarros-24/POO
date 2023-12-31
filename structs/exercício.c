#include <stdio.h>

typedef struct par {
    int x, y;
}par;

int main() {
    par x;
    x.x = 1;
    x.y = 2;
    printf("%d\n%d\n", x.x, x.y);
}
