#include<stdio.h>

int main()
{

    int i, nbr; 
    int tab[100];
  
    printf("entrez le nombre d'elements:\n ");
    scanf("%d", &nbr);
    for(i = 0; i < nbr; ++i)
    {
       printf("entrer le nombre %d: ", i+1);
       scanf("%d", &tab[i]);
    }
    for(i = 1; i < nbr; ++i)
    {
       if(tab[0] > tab[i])
           tab[0] = tab[i];
    }
    printf("Le min element est %d", tab[0]);
    return 0;
} 