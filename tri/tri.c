// challenge 1 Écrivez un programme C qui implémente l'algorithme de tri à bulles pour trier un tableau d'entiers.
// Affichez le tableau avant et après le tri.

#include <stdio.h>

void bubblesort(int T[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (T[j] > T[j+1]) {
                temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
    }
}
void afficher(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main() {
    int tableau[] = {4, 3, 2, 22, 5, 18, 10};
    int n = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau avant tri : ");
    afficher(tableau, n);

    bubblesort(tableau, n);

    printf("Tableau apres tri : ");
    afficher(tableau, n);

    return 0;
}



