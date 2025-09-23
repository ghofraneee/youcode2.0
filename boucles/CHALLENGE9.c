#include<stdio.h>
int main(){
    int n;
    int chiff =0;                                  
    printf("entre un nombre positif :");
    scanf("%d",&n);
    do { 
        chiff++;
        n = n % 10;
    } while ( n!=0 );
   
        printf ("le nombre %d de chiffres et : %d",n,chiff);

   return 0;

    
}