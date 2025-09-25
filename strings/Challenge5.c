#include <stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    char chai[100];
    char tab[100];
    int t, i, j;
 
    printf(" entrez la chaine de caractere pour inverse :  ");
    gets(chai);
    j = 0;
    t = strlen(chai);
    tab[t] = '\0';
    for (i = t - 1; i >= 0; i--)
    {
      tab[j++] = chai[i];
    }
    tab[i] = '\0';
 
    printf(" la chaine est inverse : %s", tab);
    
    return 0;
}