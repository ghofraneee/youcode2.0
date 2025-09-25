#include <stdio.h>
#include <string.h> 

int main() {
    char chai1[100]; 
    char chai2[100]; 
    printf("Entrez la premiere chaine : ");
    fgets(chai1, sizeof(chai1), stdin);

    printf("Entrez la deuxieme chaine : ");
    fgets(chai2, sizeof(chai2), stdin); 

    if (strcspn(chai1, "\n") < strlen(chai1)) {
        chai1[strcspn(chai1, "\n")] = 0;
    }
    if (strcspn(chai2, "\n") < strlen(chai2)) {
        chai2[strcspn(chai2, "\n")] = 0;
    }

    strcat(chai1, chai2); 
    printf("La chaine final est : %s\n", chai1);

    return 0;
}
