#include<stdio.h>

int main (){
    float resu;
    int annee ;
    char mois[20], jours [20] , heures[20], minutes[20], secondes[20];
    printf("entrez une annee :");
    scanf("%d",&annee);
    printf ("convertir annee a (mois / jours/heures/minutes/secondes:");
    scanf("%s", mois, jours,heures, minutes, secondes);
    switch(annee){
        case 1 : resu = annee *12;
        printf("annee en mois est : %.2f" , resu);
        break;
          case 2 : resu = annee *365;
        printf("annee en jours est : %f" , resu);
        break;
          case 3 : resu = annee *8760;
        printf("annee en heures est : %f" , resu);
        break;
          case 4 : resu = annee *525600;
        printf("annee en minutes est : %f" , resu);
        break;
          case 5: resu = annee *31536000;
        printf("annee en secondes est : %f" , resu);
        break;
    }
   return 0;
   

}