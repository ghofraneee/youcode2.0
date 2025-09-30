#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define MC 100
#define ML 50

typedef struct {
    char nom[ML];
    int id;
    char num[ML];
    char email[ML];
} contact;

contact c[MC];
int count = 0;
int newid = 1;
int choix;

void ajouter();
void modifier();
void supprimer();
void afficher();
void rechercher();
int emailvalidation(const char *email);


int main() {
    do {
        printf("\n===== CARNET DE CONTACT =====\n");
        printf("1 - Ajouter un contact\n");
        printf("2 - Modifier un contact\n");
        printf("3 - Supprimer un contact\n");
        printf("4 - Afficher tous les contacts\n");
        printf("5 - Rechercher un contact\n");
        printf("6 - Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1:
                ajouter();
                break;
            case 2:
                modifier();
                break;
            case 3:
                supprimer();
                break;
            case 4:
                afficher();
                break;
            case 5:
                rechercher();
                break;
            case 6:
                printf("Au revoir;\n");
                break;
            default:
                printf("error\n");
        }
    } while (choix != 6);

    return 0;
}


void ajouter() {
    if (count < MC) {
        printf("\n===== AJOUTER UN CONTACT =====\n");

        printf("Entrez le nom : ");
        fgets(c[count].nom, ML, stdin);
        c[count].nom[strcspn(c[count].nom, "\n")] = 0;

        
            printf("Entrez le numéro de téléphone : ");
            fgets(c[count].num, ML, stdin);
            c[count].num[strcspn(c[count].num, "\n")] = 0;

       
        do {
            printf("Entrez l'adresse e-mail : ");
            fgets(c[count].email, ML, stdin);
            c[count].email[strcspn(c[count].email, "\n")] = 0;

            if (!emailvalidation(c[count].email)) {
                printf(" Email invalide\n");
            }
        } while (!emailvalidation(c[count].email));

        
        c[count].id = newid++;
        count++;

        printf(" Contact ajouté avec succès.\n");

    } else {
        printf(" Le carnet de contacts est plein.\n");
    }
}


void modifier() {
    char nomrecherche[ML];
    printf("\n===== MODIFIER UN CONTACT =====\n");
    printf("entrez le nom du contact a modifier : ");
    fgets(nomrecherche, ML, stdin);
    nomrecherche[strcspn(nomrecherche, "\n")] = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].nom, nomrecherche) == 0) {
            printf("Contact trouvé : %s\n", c[i].nom);

            printf("entrez le nouveau numEro de telephone : ");
            fgets(c[i].num, ML, stdin);
            c[i].num[strcspn(c[i].num, "\n")] = 0;

            printf("entrez la nouvelle adresse e-mail : ");
            fgets(c[i].email, ML, stdin);
            c[i].email[strcspn(c[i].email, "\n")] = 0;

            printf("contact modifie avec succes.\n");
            return;
        }
    }
    printf("contact non trouve\n");
}


void supprimer() {
    char nomrecherche[ML];
    printf("\n===== SUPPRIMER UN CONTACT =====\n");
    printf("Entrez le nom du contact pour supprimer : ");
    fgets(nomrecherche, ML, stdin);
    nomrecherche[strcspn(nomrecherche, "\n")] = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].nom, nomrecherche) == 0) {
            printf("Contact trouve : %s\n", c[i].nom);
            printf("1 - confirmer suppression\n");
            printf("2 - annuler\n");
            int choix2;
            printf("Entrez votre choix : ");
            scanf("%d", &choix2);
            getchar(); 

            if (choix2 == 1) {
                for (int j = i; j < count - 1; j++) {
                    c[j] = c[j + 1];
                }
                count--;
                printf("Contact supprimé avec succès.\n");
            } else {
                printf("Suppression annulée.\n");
            }
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void afficher() {
    printf("\n===== LISTE DES CONTACTS =====\n");
    if (count == 0) {
        printf("Aucun contact à afficher.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("\nID: %d\n", c[i].id);
            printf("Nom: %s\n", c[i].nom);
            printf("Téléphone: %s\n", c[i].num);
            printf("E-mail: %s\n", c[i].email);
        }
    }
}

void rechercher() {
    int choix;
    char texte[ML];
    int identifiant;
    int trouve = 0;

    printf("\n===== RECHERCHER UN CONTACT =====\n");
    printf("Rechercher par :\n");
    printf("1 - Nom\n");
    printf("2 - E-mail\n");
    printf("3 - ID\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    getchar(); 

    if (choix == 1) {
        printf("Entrez le nom : ");
        fgets(texte, ML, stdin);
        texte[strcspn(texte, "\n")] = 0;

        for (int i = 0; i < count; i++) {
            if (strcmp(c[i].nom, texte) == 0) {
                printf("\nContact trouvé :\n");
                printf("ID: %d\nNom: %s\nTéléphone: %s\nE-mail: %s\n",
                       c[i].id, c[i].nom, c[i].num, c[i].email);
                trouve = 1;
                break;
            }
        }

    } else if (choix == 2) {
        printf("Entrez e-mail : ");
        fgets(texte, ML, stdin);
        texte[strcspn(texte, "\n")] = 0;

        for (int i = 0; i < count; i++) {
            if (strcmp(c[i].email, texte) == 0) {
                printf("\nContact trouvé :\n");
                printf("ID: %d\nNom: %s\nTéléphone: %s\nE-mail: %s\n",
                       c[i].id, c[i].nom, c[i].num, c[i].email);
                trouve = 1;
                break;
            }
        }

    } else if (choix == 3) {
        printf("Entrez ID : ");
        scanf("%d", &identifiant);

        for (int i = 0; i < count; i++) {
            if (c[i].id == identifiant) {
                printf("\nContact trouvé :\n");
                printf("ID: %d\nNom: %s\nTéléphone: %s\nE-mail: %s\n",
                       c[i].id, c[i].nom, c[i].num, c[i].email);
                trouve = 1;
                break;
            }
        }

    } else {
        printf("error.\n");
        return;
    }

    if (!trouve) {
        printf("Aucun contact trouvé.\n");
    }
}

