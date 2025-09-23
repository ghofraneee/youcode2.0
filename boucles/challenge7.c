#include<stdio.h>
int main(){
    int entier;
    int inver =0;
    printf("entrer un entier :");
    scanf("%d",&entier);
  

    while (entier!=0){
        inver=(inver*10) + (entier %10);
        entier = entier/10;
    }
    printf("le nomber inverse c'est :%d " ,inver); 
    
    return 0;

}