   #include<stdio.h>
   int main(){
    int taille;
    printf ("Entre le taille : ");
    scanf ("%d",&taille);

   int T[taille];

     for (int i=0;i<taille;i++){
        printf ("T[%d] : ",i);
        scanf ("%d",&T[i]);
    }

    //Affichage
    for (int i=0;i<taille;i++){
        printf ("T[%d] : %d \n",i,T[i]);
    }

    return 0;
   }
   