//challenge 2 Écrivez un programme C qui implémente l'algorithme de tri par insertion pour trier un tableau d'entiers. 
//Affichez le tableau avant et après le tri.

#include <stdio.h>
void triinsertion(int t[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = t[i];
        j = i - 1;

        
        while (j >= 0 && t[j] > key) {
            t[j + 1] = t[j];
            j = j - 1;
        }
        t[j + 1] = key;
    }
}
void afficher(int t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int main() {
    int tableau[] = {12, 11, 13, 5, 2};
    int n = sizeof(tableau) / sizeof(tableau[0]);

    printf("tableau avant tri : ");
    afficher(tableau, n);

    triinsertion(tableau, n);

    printf("Tableau apres tri : ");
    afficher(tableau, n);

    return 0;
}



