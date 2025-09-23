#include <stdio.h>

int main() {
    char nom[60], prenom[60], email[60] , sexe[60];
    int age;

    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prenom : ");
    scanf("%s", prenom);
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez votre sexe homme/femme : ");
    scanf("%s", sexe);
    printf("Entrez votre email : ");
    scanf("%s", email);
    printf("Nom      : %s\n", nom);
    printf("Prenom   : %s\n", prenom);
    printf("Age      : %d ans\n", age);
    printf("Sexe     : %s\n", sexe);
    printf("Email    : %s\n", email);

    return 0;
}
