#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include <stdbool.h>
#define MC 100
#define ML 50

typedef struct 
{
    int id;
    char nom[ML];
    char prenom[ML];
    char numeroMaillot [ML];
    char poste[ML];
    int age;
    int buts;
}joueur;
joueur g[MC];
int count = 0;
int newid = 1;
int choix;
int choix2;

int menu();
void ajouter();
void ajouter_joueur();
bool statut;
void afficher_tous();
void afficher_seul();
void afficher_tri();
void modifier();
void supprimer();
void rechercher();
int rechercher_id(int index);
int rechercher_nom (char []);
char statistiques();

int main(){
    do
    {
        printf("\n===== GESTION D'UNE ÉQUIPE DE FOOTBALL =====\n");
        printf("1 - Ajouter un joueur \n");
        printf("2 - Afficher tous les joueurs\n");
        printf("3 - Modifier un joueur\n");
        printf("4 - Supprimer un joueur\n");
        printf("5 - Rechercher un joueur\n");
        printf("6-Afficher les Statistiques\n");
        printf("7 - Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            afficher_tous();
            break;
        case 3:
            modifier();
            break;
        case 4:
            supprimer();
            break;
        case 5 :
             rechercher();
             break;
        case 6 :
             statistiques();
             break;
        case 7 :
            printf("Au revoir\n");
            break;
            
        default:
        printf("error\n");
            break;
        }
    } while (choix !=7);
    return 0;
}
void ajouter (){
    if (count < MC) {
        printf("\n===== AJOUTER UN JOUEUR =====\n");

        printf("Entrez le nom : \n");
        fgets(g[count].nom, ML, stdin);
        g[count].nom[strcspn(g[count].nom, "\n")] = 0;

        printf("Entrez le prenom : \n");
        fgets(g[count].prenom, ML, stdin);
        g[count].prenom[strcspn(g[count].prenom,  "\n")]=0;

        printf("Entrez votre numero de maillot :\n");
        fgets(g[count].numeroMaillot, ML,stdin);
        g[count].numeroMaillot[strcspn(g[count].numeroMaillot, "\n")]=0;

        printf("choisir votre poste : \n");
        printf("1-gardien\n");
        printf("2-Défenseur \n");
        printf("3-millieu\n");
        printf("4-attaquant\n");

        scanf("%d",&choix2);
            switch (choix2)
        {
        case 1:
        strcpy(g[count].poste , "gardien");
            
            break;
        case 2:
                strcpy(g[count].poste , "Défenseur");

            break;
        case 3:
                strcpy(g[count].poste , "millieu");

            break;
        case 4:
                strcpy(g[count].poste , "attaquant");
        break;
        default:
        printf("invalid choix\n");
            break;
        }
        
        
        

}}






