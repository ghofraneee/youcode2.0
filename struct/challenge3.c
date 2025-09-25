#include <stdio.h>
#include<string.h>

struct rrecta {
    float longe;
    float larg;
};

float calcul(struct rrecta r) {
    return r.longe * r.larg;
}

int main() {
    struct rrecta rect;
    rect.longe = 6.22;
    rect.larg = 2.0;

    float aire = calcul(rect);

    printf("aire de rect : %f\n", aire);

    return 0;
}

