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
    int numeroMaillot;
    char poste[ML];
    int age;
    int buts;
}joueur;
joueur g[MC];
int count = 0;
int newid = 1;
int choix;

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
        print
            break;
        }
    } while (condition);
    
}






