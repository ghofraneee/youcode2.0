#include <stdio.h>

 int main(){

   int taille;
    printf ("Entre le taille : ");
    scanf ("%d",&taille);

   int tab[taille];

     
     for (int i=0;i<taille;i++){
        printf ("tab[%d] : ",i);
        scanf ("%d",&tab[i]);
    }


    for (int i=0;i<taille;i++){
        printf ("tab[%d] : %d \n",i,tab[i]);
    }

    return 0;
 }