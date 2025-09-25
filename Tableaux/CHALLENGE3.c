#include <stdio.h>

int main() {
    int n, i, somm = 0; 
    int t[100];   
    printf("entrez le nombre d'elements  : ");
    scanf("%d", &n);
    printf("entrez les %d elements : \n", n);
    for (i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &t[i]); 
    }
    for (i = 0; i < n; i++) {
        somm = somm + t[i]; 
    }
    printf("la somm totale des elements du tableau est : %d\n", somm);

    return 0; 
}