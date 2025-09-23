#include <stdio.h>

int main() {
    float c, k;
    printf("Temperature en Celsius : ");
    scanf("%f", &c);
    k = c + 274.15;
    printf("En kelvin : %.2f\n", k);
    return 0;
}