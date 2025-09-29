#include <stdio.h>

void selection(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        int temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}
void afficher(int tab[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}
int main() {
    int tab[] = {9, 10, 14, 37, 11};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("avant tri : ");
    afficher(tab, n);

    selection(tab, n);

    printf("apres tri :");
    afficher(tab, n);

    return 0;
}
