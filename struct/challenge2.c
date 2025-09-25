#include <stdio.h>
#include <string.h>

#define nbr 5

struct etudiant {
    char nom[50];
    char prenom[50];
    int notes[nbr];};

int main() {
    struct etudiant e;

    strcpy(e.prenom, "ghofrane");
    strcpy(e.nom, "chemnane");

    int i;
    for (i = 0; i < nbr; i++) {
        e.notes[i] = 10 + i; 
    }
    printf("prenom: %s\n", e.prenom);
    printf("nom: %s\n", e.nom);
   
    printf("notes: ");
    for (i = 0; i < nbr; i++) {
        printf("%d \n ", e.notes[i]);
    }

    return 0;
}
