#include<stdio.h>
int main(){
    long n;
    int chiff =0;                                  
    printf("entre un nombre positif :");
    scanf("%ld",&n);
 while ( n!=0 ){
        chiff++;   
        n = n % 10;
        
      
    }
   printf ("le nombre %d de chiffres et : %d",n,chiff);  
        

   return 0;

    
}