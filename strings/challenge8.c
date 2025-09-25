#include<stdio.h>

int main(){
    char str [100];
    int i;
    printf("\n entrez la chaine pour convertir a minuscules:");
    gets(str);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        
    }
    printf("\n la chaine minuscules: %s",str);
    return 0;
    
}