#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define M 200

typedef struct 
{
    int id;
    char nom [M];
    char espece[M];
    int age;
    char habitat[M];
    float poids;
}Animal;
Animal A[M];
int taille=0;
int dernierID =1;
int newid;
int choix;
int choix2;

int menu();
void ajouter();
void ajouterunique();
void ajouterplus();
void afficher();
void modifier();
void supprimer();
void rechercher();
void statistiques();

int main(){
    int menu();
    do
    {
        printf("\n===== GESTION D'UN ZOO =====\n");
        printf("1-ajouter un animal \n");
        printf("2-afficher les animaux \n ");
        printf("3-modifier un animal \n");
        printf("4-supprimer un animal \n");
        printf("5-rechercher un animal \n");
        printf("6-afficher les statistiques \n");
        printf("7-Quitte:\n");
        printf("entrez votre choix :\n");
        scanf("%d",&choix);
        getchar ();
        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
           afficher();
           break;
        case 3:
           modifier();
           break;
        case 4:
           supprimer();
           break;
        case 5:
           rechercher();
           break;
        case 6:
            statistiques();
            break;
        case 7:
             printf("Au revoir\n");
            break;
        
        default:
        printf("choix invalid\n");
            break;
        }

    } while (choix!=7);
    return 0;

    
}
void ajouter() {
    int choix2;

    if (taille >= M) {
        printf("Le zoo est plein !\n");
        return;
    }

    printf("\n===== AJOUTER ANIMAL =====\n");
    printf("1 - Ajouter un animal\n");
    printf("2 - Ajouter plusieurs animaux\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix2);

    switch (choix2) {
        case 1: ajouterunique();
         break;
        case 2: ajouterplus();
         break;
        default: printf("Choix invalide.\n");
    }
}
void ajouterunique() {
    if (taille >= M) {
        printf("Le zoo est plein.\n");
        return;
    }

    printf("\n=== Ajouter un animal ===\n");

    A[taille].id = dernierID;
    dernierID++;

    printf("entrez le nom d'animal:\n");
    scanf("%s", A[taille].nom);

    printf("entrez l'espèce :\n");
    scanf("%s", A[taille].espece);

    printf("entrez l'age de animal:\n");
    scanf("%d", &A[taille].age);

    printf("entrez habitat:\n");
    scanf("%s", A[taille].habitat);

    printf("entrez le poids de animal:\n");
    scanf("%f", &A[taille].poids);

    printf("Animal ajouté avec succès avec ID %d !\n", A[taille].id);
    taille++;
}


void ajouterplus() {
    int n;
    printf("Combien d'animaux voulez-vous ajouter ? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (taille >= M) {
            printf("Zoo plein !\n");
            break;
        }
        printf("\n--- Animal %d ---\n", i + 1);
        ajouterunique();  
    }
}

  void afficher() {
    if (taille == 0) {
        printf("Aucun animal à afficher.\n");
        return;
    }

    printf("\n======= LISTE DES ANIMAUX =======\n");
    for (int i = 0; i < taille; i++) {
        printf("\nAnimal %d :\n", i + 1);
        printf("ID       : %d\n", A[i].id);
        printf("nom      : %s\n", A[i].nom);
        printf("espèce   : %s\n", A[i].espece);
        printf("Âge      : %d ans\n", A[i].age);
        printf("habitat  : %s\n", A[i].habitat);
        printf("poids    : %.2f kg\n", A[i].poids);
    }
}

     
     
     



