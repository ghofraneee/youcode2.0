#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i;
   printf("\n entrez la chaine a convertir  majuscule: ");
   gets(str);
   for (i = 0; str[i]!='\0'; i++) {
     
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("\n La chaine majuscule : %s", str);
   return 0;
}