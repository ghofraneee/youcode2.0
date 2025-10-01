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
void afficherlist();
void affichernom();
void afficherage();
void afficheragecroi();
void afficheragedecroi();
void afficherhabitat();
void modifier();
void modifierhabitat();
void modifierage();
void supprimer();
void rechercher();
void statistiques();

void initZoo() {
    Animal exemple[20] = {
        {1, "Leo",      "Lion",       5,  "Savane",    190.5},
        {2, "Mimi",     "Singe",      3,  "Jungle",    35.2},
        {3, "Ella",     "Elephant",  10,  "Savane",   5400.0},
        {4, "Koko",     "Gorille",    7,  "Jungle",   160.7},
        {5, "Raph",     "Tortue",    50,  "Aquatique", 15.0},
        {6, "Zara",     "Zebra",      4,  "Savane",   380.2},
        {7, "Pipo",     "Perroquet",  2,  "Jungle",    0.9},
        {8, "Toto",     "Tigre",      6,  "Jungle",   220.3},
        {9, "Nemo",     "Poisson",    1,  "Aquatique", 0.5},
        {10, "Manny",   "Mammouth",  25,  "Toundra", 6000.0},
        {11, "Lili",    "Lezard",     3,  "Desert",    1.1},
        {12, "Oscar",   "Ours",       8,  "Foret",    300.0},
        {13, "Sasha",   "Serpent",    4,  "Jungle",    3.2},
        {14, "Max",     "Loup",       5,  "Foret",     45.7},
        {15, "Bella",   "Chevre",     2,  "Montagne",  25.0},
        {16, "Charly",  "Chameau",    7,  "Desert",   400.0},
        {17, "Daisy",   "Dauphin",   12,  "Aquatique", 200.0},
        {18, "Rex",     "Chien",      6,  "Maison",    20.0},
        {19, "Coco",    "Crocodile",  9,  "Marais",   500.0},
        {20, "Momo",    "Mouette",    3,  "Plage",     1.5}
    };

    for (int i = 0; i < 20; i++) {
        A[i] = exemple[i];
    }
    taille = 20;
    dernierID = 21; 
}


int main(){
    initZoo();
    
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
        /*rechercher();*/
           break;
        case 6:
           /* statistiques();*/
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
        default: printf("choix invalide.\n");
    }
}
void ajouterunique() {
    if (taille >= M) {
        printf("Le zoo est plein.\n");
        return;
    }

    printf("\n========Ajouter un animal =======\n");

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


void ajouterplus(){
    int n;
    printf("Combien d'animaux voulez-vous ajouter  ");
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
        int choix3;

    if (taille == 0) {
        printf("Aucun animal à afficher\n");
        return;
    }
    printf("\n===== AFFICHER LES ANIMAUX =====\n");
    printf("1 - Afficher la liste complete\n");
    printf("2 - trier par nom\n");
    printf("3 - trier par age\n");
    printf("4 - afficher uniquement les animaux d'un habitat spécifique\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix3);
    switch (choix3)
    {
    case 1:
    afficherlist();
    break;
    case 2: 
    affichernom();
    break;
    case 3:
    afficherage();
    break;
   /*case 4:
    afficherhabitat();
    break;*/
    
    default:printf("Choix invalide\n");
        break;
    }

}

void afficherlist(){
        printf("\n======= LISTE DES ANIMAUX =======\n");
        for (int i = 0; i < taille; i++) {
        printf("\nAnimal %d :\n", i + 1);
        printf("ID       : %d\n", A[i].id);
        printf("nom      : %s\n", A[i].nom);
        printf("espèce   : %s\n", A[i].espece);
        printf("Âge      : %d ans\n", A[i].age);
        printf("habitat  : %s\n", A[i].habitat);
        printf("poids    : %.2f kg\n", A[i].poids);
    }}

void affichernom(){
    Animal echange;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (strcmpi(A[j].nom, A[j + 1].nom) > 0) {
                echange = A[j];
                A[j] = A[j + 1];
                A[j + 1] = echange;
            }
        }
    }
    printf("\nListe est trie par nom\n");
    afficherlist();
    

}
void afficherage(){
    int choix4;
    printf("\n===== AFFICHER AGE DE LES ANIMAUX =====\n");
    printf("1 - Afficher age par ordre croissant\n");
    printf("2 - Afficher age par ordre décroissant\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix4);
    switch (choix4)
    {
    case 1:
        afficheragecroi();
        break;
    case 2 :
       afficheragedecroi();
       break;
    
    default:printf("Choix invalide\n");
        break;
    }
}
void afficheragecroi(){
    Animal tempage;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (A[j].age > A[j + 1].age) {
                tempage = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tempage;
            }
        }
    }
    printf("\nListe est trie par age \n");
    afficherlist();
}
void afficheragedecroi(){
    Animal tempage;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (A[j].age < A[j + 1].age) {
                tempage = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tempage;
            }
        }
    }
    printf("\nListe est trie par age \n");
    afficherlist();
}
/*void afficherhabitat(){

}*/

void modifier(){
    int choix5;
    printf("\n===== MODIFIER UN ANIMAL =====\n");
    printf("1 -Modifier l'habitat d'un animal \n");
    printf("2 - Modifier l'age d'un animal\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix5);
    switch (choix5)
    {
    /*case 1:
     modifierhabitat();
    break;*/
    case 2:
    modifierage();
    break;
    
    default:printf("Choix invalid \n");
        break;
    }

}
/*void modifierhabitat(){}*/
void modifierage() {
    char nom[M];
    int nouvage;
    printf("Entrez le nom de l'animal dont vous voulez modifier l'âge : ");
    scanf("%s", nom);
    printf("Entrez le nouvel âge : ");
    scanf("%d", &nouvage);

    for (int i = 0; i < taille; i++) {
        if (strcmpi(A[i].nom, nom) == 0) {
            A[i].age = nouvage;
            printf("Âge modifié avec succès pour %s.\n", A[i].nom);
            return;
        }
    }
    printf("Animal non trouvé.\n");
}
void supprimer() {
    if (taille == 0) {
        printf("Aucun animal pour supprimer\n");
        return;
    }

    int idSuppr;
    printf("\n===== SUPPRIMER UN ANIMAL ======\n");
    printf("Entrez l'ID de l'animal à supprimer : ");
    scanf("%d", &idSuppr);

    int trouve = 0;
    for (int i = 0; i < taille; i++) {
        if (A[i].id == idSuppr) {
            trouve = 1;
            for (int j = i; j < taille - 1; j++) {
                A[j] = A[j + 1];
            }
            taille--;
            printf("Animal avec ID %d supprimé avec succès\n", idSuppr);
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec cet ID\n");
    }
}

     



