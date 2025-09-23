#include<stdio.h>

int main (){
    char alphabet;
    printf("entre un caractere :");
    scanf("%s ",alphabet);
    if (alphabet >= 'A' && alphabet<='Z'){
        printf("le caracter est majuscule ");
    }
    else {
        printf("le caracter et min");
    }
    return 0;
}