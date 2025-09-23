#include<stdio.h>

int main (){
    int n;
    printf("entrez un nombre :");
    scanf("%d",&n);
    if (n>0)
    {
       printf("le nombre et positif ");
    }
    else if (n<0){
        printf("le nombre et negatif");
    }
    else{
        printf("le nombre egal 0 ");
    }
   return 0; 
    
}