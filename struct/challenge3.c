#include <stdio.h>
#include<string.h>


struct rrecta{
    float longe;
    float larg;
};


float calcul(struct rrecta r) {
    return r.longe * r.larg;
}

int main() {
    struct rrecta rect = {6.22, 2.0};
    float aire = calcul(rect);

    printf("aire du rect: %f\n", aire);

    return 0;
}
