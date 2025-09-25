#include<stdio.h>
#include<string.h>
int main (){
    char chai1[100] ,chai2[100];
    printf ("donne la premier chaine :");
    gets(chai1);
    printf("donne la deuxieme chaine :");
    gets(chai2);

    if (strcmp(chai1,chai2)==0){
        printf("les deux chaine et egale\n");
    }else{
        printf("les deux chaine n'est pas egal\n ");
    }
    return 0;
}