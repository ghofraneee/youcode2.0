#include <stdio.h>


int m =100;
char titres[100][50];
char auteurs[100][50];
int quantites[100];
float prix[100];
int nbr = 0;
int choix;
int i;
int modif;
int nouv;

int main(){
do{
    printf("1. ajouter un livre\n");
    printf("2. afficher tous les livres\n");
    printf("3. rechercher un livre\n");
     printf("4. mettre à jour la quantite\n");
    printf("5. supprimer un livre\n");
    printf("6.afficher le nombre total de livres en stock\n");
    
   
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
           if (nbr < m) {
                printf("entrez le titre du livre :\n ");
                scanf("%s", titres[nbr]);
                printf("entrez auteur du livre :\n ");
                scanf("%s", auteurs[nbr]);
                printf("entrez la quantite :\n ");
                scanf("%d", &quantites[nbr]);
                printf("entrez le prix  : ");
                scanf("%d", &prix[nbr]);
                    nbr++ ;
                printf("Livre ajoute avec success!\n");
            } else {
                printf("le stock est plein !\n");
            } 
        
        
            break;
            case 2:
              for (int i=0;i<nbr;i++ ){
                printf("titres[%s]: %s\n" ,i ,titres[i]);
                printf("auteurs[%s]: %s\n",i,auteurs[i]);
                printf("prix[%d]: %d \n",i ,prix[i]);
                printf("quantites[%d]: %d \n",i, quantites[i]);

              }
            
            break;
            case 3:
            printf("la quantite actuel est :");
            for (int i = 0; i < 100; i++)
            {
                printf("%d\n",quantites[i]);

            }
            printf("entrez l indice de l'élement a modifie (0-99):");
            scanf("%d",&modif);
            if (modif>=0 && modif<100)
            {
                printf("entrez la nouvelle quantite : ");
                scanf("%d",&nouv);

                quantites[modif]=nouv;

                printf("la qu")
            }
            
            
            
    }
} while (choix!=0);

return 0;
}

    

    
     