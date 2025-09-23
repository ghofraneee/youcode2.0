#include <stdio.h> 

int main() {
    int i, n ;
    int som =0;
    

    printf("entrer  un entier n :"); 
    scanf("%d", &n); 

    
    for (i = 1; i <= n; i++) {
        som = som + i; 
    }

    printf("La somme des %d premiers entiers est : %d\n", n, som); 

    return 0; 
}
