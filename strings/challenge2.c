#include <stdio.h>
#include<string.h>
int main() {
    char mchaine[] = "bonjour safae";
    int x = 0;

    while (mchaine[x] != '\0') {
        x++;
    }
    printf("La chaîne est : %s\n", mchaine);

    printf("La longueur de la chaine est : %d\n", x);

    return 0;
}



