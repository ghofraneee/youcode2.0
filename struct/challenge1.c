#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct utilisateur 
{
    char prenom[70];
    char nom[70];
    int age;
};
int main (){
  struct utilisateur p;
   strcpy(p.prenom, "ghofrane");
   strcpy(p.nom, "chemnane");
  
    p.age = 22;
    printf("prenom: %s\n", p.prenom);
    printf("Nom: %s\n", p.nom);
    printf("age: %d\n", p.age);

    return 0;
  
}