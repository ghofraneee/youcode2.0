#include<stdio.h>
int main (){
    int te[10], tf[10];
int i;
printf("entrez les elements du tableau initial: \n");
 for (i=0; i<10;i++){
    printf("te[%d]=",0);
    scanf("%d",&te[i]);
 }
 for (i=0;i<10;i++){
    tf[10-i]=te[i];
 }
 printf("tableau inversee:\n ");
 for( i = 0; i < 10; i++)
 {
    printf("ts[%d]=%d\n",0);
 }
 return 0;
}

 