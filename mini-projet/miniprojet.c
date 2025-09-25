#include <stdio.h>
#include<string.h>



char titres[100][50];
char auteurs[100][30];
int quantites[100];
int prix[100];
int nbr= 0;
int choix;
int main (){
do 
{


    printf("1. ajouter un livre\n");
    printf("2. afficher tous les livres dispo\n");
    printf("3. rechercher un livre par son titre \n");
    printf("4. mettre a jour la quantite\n");
    printf("5. supprimer un livre du stock\n");
    printf("6.afficher le nombre total de livres en stock\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);


    switch (choix) {
        case 1:
            if (nbr < 100) {

                printf("entrez le titre du livre : ");
                scanf("%s", titres[nbr]);
                printf("entrez l'auteur du livre : ");
                scanf("%s", auteurs[nbr]);
                printf("entrez le prix : ");
                scanf("%d", &prix[nbr]);

                printf("entrez la quantité : ");
                scanf("%d", &quantites[nbr]);
                nbr++;
                printf("livre ajoute avec succes !\n");
            } else {
                printf("stock et plein !\n");
            }
            break;
        case 2 :  
              for (int i=0;i<nbr;i++ ){
                printf("titres[%s]: %s\n" ,i ,titres[i]);
                printf("auteurs[%s]: %s\n",i,auteurs[i]);
                printf("prix[%d]: %d \n",i ,prix[i]);
                printf("quantites[%d]: %d \n",i, quantites[i]);

              }
            case 3: 
            char Cle[50];
            printf("Entrez le titre ou l'auteur du livre à rechercher : ");
            scanf("%s");
            int trouve = 0;
            for (int i = 0; i < nbr; i++) {
                if (strcmp(titres[i]) == 0 || strcmp(auteurs[i]) == 0) {
                    printf("Titre : %s, Auteur : %s, Quantité : %d\n", titres[i], auteurs[i], quantites[i]);
                    trouve = 1;
                }
            }
            if (!trouve) {
                printf("Livre non trouvé !\n");
            }
            break;
            case 4: 
            char titre[50];
            printf("Entrez le titre du livre à mettre à jour : ");
            scanf("%s", titre);
            int trouve = 0;
            for (int i = 0; i < nbr; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    printf("Entrez la nouvelle quantité : ");
                    scanf("%d", &quantites[i]);
                    printf("quantite mise à jour avec succès !\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Livre non trouvé !\n");
            }
            break;
        
         case 5:
          char titr[50];
            printf("Entrez le titre du livre a supprimer : ");
            scanf("%s", titre);
            int trouve = 0;
            for (int i = 0; i < nbr; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    for (int j = i; j < nbr - 1; j++) {
                        strcpy(titres[j], titres[j + 1]);
                        strcpy(auteurs[j], auteurs[j + 1]);
                        quantites[j] = quantites[j + 1];
                    }
                    nbr--;
                    printf("sivre supprime avec succes !\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Livre non trouve !\n");
            }
            break;
        
        
        case 6:
            if (nbr == 0) {
                printf("Aucun livre en stock !\n");
            } else {
                for (int i = 0; i < nbr; i++) {
                    printf("titre : %s, auteur : %s, quantité : %d\n", titres[i], auteurs[i], quantites[i]);
                }
            }
            break;


      
        default:
        printf("error !\n");
            
    }
} while (choix != 0);

return 0;
}