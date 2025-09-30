#include <stdio.h>

int main() {
    int tableau[] = {10, 25, 8, 42, 15, 30, 17};
    int taille = sizeof(tableau) / sizeof(tableau[0]); 
    int element_recherche;
    int trouve = 0; 

    printf("Le tableau  :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Entrez l'element que vous souhaitez rechercher : ");
    scanf("%d", &element_recherche);

    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element_recherche) {
            trouve = 1; 
            printf("element %d a été trouvé à l'indice %d.\n", element_recherche, i);
            break; 
        }
    }

    
    if (trouve == 0) {
        printf("L'element %d n'a pas été trouvé dans le tableau.\n", element_recherche);
    }

    return 0;
}