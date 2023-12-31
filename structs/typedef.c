#include <stdio.h>

struct par {
    int x, y;
};

typedef struct par par;

int main() {
    par x;
    x.x = 1;
    x.y = 2;
    printf("%d %d\n"  , x.x, x.y);
}
 

